/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:37:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/10 13:02:27 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_string.h"

int	run_with_file(char *filename)
{
	ft_putstr(filename);
	return (0);
}

typedef struct s_buffer_entry
{
	char			*buffer;
	int				pos;
	int				size;
}	t_buffer_entry;

t_buffer_entry	*add_entry(char entry, t_buffer_entry *buffer_entry)
{
	char	*buffer_up;

	buffer_entry->buffer[buffer_entry->pos] = entry;
	buffer_entry->pos++;
	if (buffer_entry->pos == buffer_entry->size)
	{
		buffer_up = malloc(buffer_entry->size + 1000);
		if (buffer_up == 0)
		{
			ft_putstr("defaut alloc buffer_up de buffer_entry\n");
			return (0);
		}
		ft_strcpy(buffer_up, buffer_entry->buffer);
		free(buffer_entry->buffer);
		buffer_entry->buffer = buffer_up;
		buffer_entry->size += 1000;
	}
	return (buffer_entry);
}

t_buffer_entry	*read_stdin(void)
{
	char			entry;
	t_buffer_entry	*buffer_entry;

	buffer_entry = malloc(sizeof(t_buffer_entry));
	if (buffer_entry == 0)
		return (0);
	buffer_entry->pos = 0;
	buffer_entry->size = 1000;
	buffer_entry->buffer = malloc(1000);
	if (buffer_entry->buffer == 0)
	{
		ft_putstr("defaut alloc buffer_entry\n");
		return (0);
	}
	while (read(0, &entry, 1))
		buffer_entry = add_entry(entry, buffer_entry);
	buffer_entry = add_entry('\0', buffer_entry);

	return (buffer_entry);
}

int	main(int argc, char **argv)
{
	t_buffer_entry	*entry;
	if (argc == 1)
	{
		entry = read_stdin();
		
		ft_putstr("\nmerci\n");
		ft_putstr(entry->buffer);
		free(entry->buffer);
		free(entry);
	}
	if (argc > 1)
	{
		while (argc > 1)
		{
			run_with_file(argv[argc - 1]);
			argc--;
		}
	}
}
