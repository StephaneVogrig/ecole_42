/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:49:22 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/11 19:12:42 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "show_map.h"

void	check_square(int x, int y, t_soluce *soluce, t_struct_map *map)
{
	int	xmin;
	int	ymin;

	xmin = soluce->x + 1 - soluce->size;
	ymin = soluce->y + 1 - soluce->size;
	if (x >= xmin && x <= soluce->x && y >= ymin && y <= soluce->y)
		write(1, &map->replace, 1);
	else
		write(1, &map->empty, 1);
}

void	show_map(t_struct_map *map, t_soluce *soluce)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->nb_line)
	{
		j = 0;
		while (j < map->nb_char)
		{
			if (map->map[i][j] == map->obstacle)
				write(1, &map->obstacle, 1);
			else if (map->map[i][j] == map->empty)
				check_square(j, i, soluce, map);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
