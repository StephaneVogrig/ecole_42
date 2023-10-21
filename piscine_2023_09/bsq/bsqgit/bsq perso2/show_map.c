/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:49:22 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/10 22:25:55 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "show_map.h"

void	check_square(int x, int y, t_soluce *soluce, t_struct_map *map)
{
	int	xmin;
	int	ymin;

	xmin = soluce->x - soluce->size;
	ymin = soluce->y - soluce->size;
	if (x > xmin && x <= soluce->x && y > ymin && soluce->y <= y)
		write(1, &map->replace, 1);
	else
		write(1, &map->empty, 1);
}

void	show_map(t_struct_map *map, t_soluce *soluce)
{
	int	i;
	int	j;

	while (i < map->size)
	{
		if (map->map[j][i] == '\n')
		{
			write(1, "\n", 1);
			i = 0;
		}
		else if (map->map[j][i] == map->empty)
			check_square(i, j, soluce, map);
		else if (map->map[j][i] == map->obstacle)
		{
			write(1, &map->obstacle, 1);
			i++;
		}
		j++;
	}
}
