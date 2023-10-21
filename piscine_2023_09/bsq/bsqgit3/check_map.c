/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:18:43 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/11 21:17:52 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_math.h"
#include "check_map.h"

int	is_not_valid_param(t_struct_map *map)
{
	if (map->empty == map->obstacle || map->empty == map->replace)
		return (1);
	if (map->obstacle == map->replace)
		return (1);
	if (map->nb_line == 0)
		return (1);
	return (0);
}

int	check_first_line(t_struct_map *map, char *buffer)
{
	int		i;
	int		j;
	int		nb;
	char	*line;

	i = 0;
	j = 0;
	while (buffer[i] != '\n')
		i++;
	line = malloc(sizeof(char) * i);
	if (line == 0)
		return (1);
	while (j < i - 3)
	{
		line[j] = buffer[j];
		j++;
	}
	map->empty = buffer[i - 3];
	map->obstacle = buffer[i - 2];
	map->replace = buffer[i - 1];
	map->index_first_line = i + 1;
	nb = ft_atoi(line);
	free(line);
	map->nb_line = nb;
	return (0);
}

int	check_map_chars(t_struct_map *map, char *buffer)
{
	int	i;

	i = map->index_first_line;
	while (buffer[i] != 0)
	{
		if ((buffer[i] != map->replace && buffer[i] != map->obstacle
				&& buffer[i] != map->empty && buffer[i] != '\n'))
			return (1);
		i++;
	}
	return (0);
}

int	check_invalid(t_struct_map *map, char *buffer)
{
	int	err;

	err = 0;
	if (map->obstacle == map->replace || map->obstacle == map->empty
		|| map->replace == map->empty)
		return (1);
	if (map->nb_line == 0 || map->nb_char == 0 || map->index_first_line < 4)
		return (1);
	err = check_map_chars(map, buffer);
	return (err);
}
