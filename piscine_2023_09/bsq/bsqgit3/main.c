/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:37:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 21:25:10 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_string.h"
#include "memory.h"
#include "map_init.h"
#include "map_solve.h"
#include "run_bsq.h"

t_buffer_entry	*to_buffer_entry(int file)
{
	char			entry;
	t_buffer_entry	*buffer_entry;

	buffer_entry = malloc(sizeof(t_buffer_entry));
	if (buffer_entry == 0)
		return (0);
	buffer_entry->pos = 0;
	buffer_entry->size = 1000000000;
	buffer_entry->buffer = malloc(1000000000);
	if (buffer_entry->buffer == 0)
		return (0);
	while (read(file, &entry, 1))
		buffer_entry = add_entry(entry, buffer_entry);
	buffer_entry = add_entry('\0', buffer_entry);
	return (buffer_entry);
}

t_buffer_entry	*run_with_file(char *filename)
{
	int				file;
	t_buffer_entry	*buffer_entry;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Read Error\n");
		return (0);
	}
	buffer_entry = to_buffer_entry(file);
	return (buffer_entry);
}

void	more_than_one(int argc, char **argv, t_buffer_entry *entry)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		entry = run_with_file(argv[i]);
		if (entry != 0)
			run_bsq(entry);
		if (i < argc - 1)
			write(1, "\n", 1);
		if (entry != 0)
			free(entry->buffer);
		free(entry);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_buffer_entry	*entry;

	if (argc == 1)
	{
		entry = to_buffer_entry(0);
		run_bsq(entry);
		free(entry->buffer);
		free(entry);
	}
	if (argc > 1)
		more_than_one(argc, argv, entry);
	return (0);
}
