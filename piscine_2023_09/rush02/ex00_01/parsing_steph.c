/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_steph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 07:58:37 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 08:33:51 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "parsing_steph.h"

int	count_line(char *buffer)
{
	int	i;
	int	lines;
	int	last;
	
	i = 0;
	lines = 0;
	last = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] = '\n')
		{
			lines++;
			last = i;
		}
		i++;
	}
	if (last < i - 1)
		lines++;
	return (lines);
}

t_dict	*parsing_steph(char *file_dict)
{
	int		fd;
	int		size_buff;
	char	*buffer;
	int		ok;
	t_dict	*dict;
	
	dict = 0;
	size_buff = 1 + letters_count(file_dict);
	if (size_buff == 0)
		return (0);
	fd = open(file_dict, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(size_buff * sizeof(char));
	if (buffer == 0)
		return (0);
	ok = read(fd, buffer, size_buff);
	if (ok != -1)
	{
		buffer[size_buff - 1] = '\0';
		dict = parse(buffer);
	}1
	free(buffer);
	return (dict);
}

t_dict	*parse(char *buffer)
{
	t_dict	*dict;
	int		nbr_lines;
	
	nb_lines = count_lines(buffer);
	dict = malloc(nb_lines * sizeof(t_dict));
	
	
	return (dict);
}
