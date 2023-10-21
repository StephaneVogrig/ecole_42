/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:50:05 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 17:09:14 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_solve.h"

int	compute(int **temp, t_struct_map *map, int li, int ofs)
{
	int	mini;

	if (map->map[li][ofs] == map->obstacle)
		return (0);
	if (li == 0 || ofs == 0)
		return (1);
	if (map->map[li][ofs] == map->empty)
	{	
		mini = ft_min(temp[0][ofs - 1], temp[0][ofs]);
		mini = ft_min(mini, temp[1][ofs - 1]);
		return (mini + 1);
	}
	return (0);
}

void	init_temp(int **temp, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		temp[0][i] = 0;
		temp[1][i] = 0;
		i++;
	}
}

int	**new_temp(int size)
{
	int	**temp;

	temp = malloc(2 * sizeof(int *));
	if (temp == 0)
		return (0);
	temp[0] = malloc(size * sizeof(int));
	if (temp[0] == 0)
	{
		free(temp);
		return (0);
	}
	temp[1] = malloc(size * sizeof(int));
	if (temp[1] == 0)
	{
		free(temp);
		free(temp[0]);
		return (0);
	}
	init_temp(temp, size);
	return (temp);
}

void	set_square(int x, int y, int size, t_soluce *square)
{
	square->size = size;
	square->x = x;
	square->y = y;
}

t_soluce	*solve_map(t_struct_map *map)
{
	int			line;
	int			offset;
	int			**temp;
	t_soluce	*soluce;

	soluce = malloc(sizeof(t_soluce));
	temp = new_temp(map->nb_char);
	if (temp == 0)
		return (0);
	line = 0;
	while (line < map->nb_line)
	{
		offset = 0;
		while (offset < map->nb_char)
		{
			temp[1][offset] = compute(temp, map, line, offset);
			if (temp[1][offset] > soluce->size)
				set_square(offset, line, temp[1][offset], soluce);
			offset++;
		}
		ft_swap(temp);
		line++;
	}
	free_temp(temp);
	return (soluce);
}
