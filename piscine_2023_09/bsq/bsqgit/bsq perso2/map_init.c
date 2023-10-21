/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:51:15 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 11:34:23 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "map_init.h"

int	ft_atoi(char *str, int pos)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < pos)
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}

int	is_not_valid_param(t_struct_map *map)
{
	if (map->empty == map->obstacle || map->empty == map->replace)
		return (0);
	if (map->obstacle == map->replace)
		return (0);
	if (map->size == 0)
		return (0);
	return (1);
}

t_struct_map	*transfer_to_map(t_buffer_entry *buffer_entry)
{
	int				is_valid;
	t_struct_map	*map;

	is_valid = 1;
	map = malloc(sizeof(t_struct_map));
	if (map == 0)
		return (0);
	is_valid = transfer(buffer_entry->buffer, map);
	if (is_valid)
		return (map);
	return (0);
}

#include <stdio.h>

int	transfer(char *buffer, t_struct_map	*map)
{
	int	pos;

	pos = 0;
	while (buffer[pos] != '\n' && buffer[pos] != '\0')
		pos++;
	if (pos == '\0' || pos < 4)
		return (0);
	map->replace = buffer[pos - 1];
	map->obstacle = buffer[pos - 2];
	map->empty = buffer[pos - 3];
	map->size = ft_atoi(buffer, pos - 3);
	if (is_not_valid_param(map))
		return (-1);
	map->map = buffer_to_tab(buffer, pos + 1, *map);
	return (0);
}


char	**buffer_to_tab(char *buffer, int pos, t_struct_map map)
{
	char	**tab;
	int		x;
	int		y;

	x = 0;
	y = 0;
	tab = malloc(sizeof(char*) * map.size);
	if (tab == 0)
		return (0);
	while (buffer[pos] != 0)
	{
		if (x == 0)
			tab[y] = buffer + pos;
		if (buffer[pos] == '\n')
		{
			if (x != map.size)
				return (0);
			x = 0;
			y++;
		}
		else
			x++;
		pos++;
	}
	return (tab);
}
