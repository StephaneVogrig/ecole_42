/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:51:15 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 19:10:03 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "map_init.h"
#include "check_map.h"

t_struct_map	*transfer_to_map(t_buffer_entry *buffer_entry)
{
	int				is_valid;
	t_struct_map	*map;

	is_valid = 0;
	map = malloc(sizeof(t_struct_map));
	if (map == 0)
		return (0);
	is_valid = transfer(buffer_entry->buffer, map);
	if (is_valid == 0)
		return (map);
	return (0);
}

int	transfer(char *buffer, t_struct_map	*map)
{
	int	pos;

	pos = 0;
	check_first_line(map, buffer);
	pos = map->index_first_line;
	while (buffer[pos] != '\n' && buffer[pos] != '\0')
		pos++;
	map->nb_char = pos - map->index_first_line;
	map->map = buffer_to_tab(buffer, *map);
	return (0);
}

char	**fill_tab(char *buffer, char **tab, int pos, t_struct_map map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < map.nb_line && x < map.nb_char)
	{
		while (buffer[pos] != '\n')
		{
			tab[y][x] = buffer[pos];
			x++;
			pos++;
		}
		x = 0;
		y++;
		pos++;
	}
	return (tab);
}

char	**buffer_to_tab(char *buffer, t_struct_map map)
{
	char	**tab;
	int		i;
	int		pos;

	pos = map.index_first_line;
	if (buffer == 0)
		return (0);
	i = 0;
	tab = malloc(sizeof(char *) * map.nb_line);
	while (i < map.nb_line)
	{
		tab[i] = malloc(sizeof(char) * map.nb_char);
		i++;
	}
	if (tab == 0)
		return (0);
	tab = fill_tab(buffer, tab, pos, map);
	return (tab);
}
