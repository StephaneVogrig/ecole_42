/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:50:05 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/10 20:03:05 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_solve.h"

int	compute(int **temp, t_struct_map *map, int li, int ofs)
{
	int	mini;

	if (li == 0)
		return (1);
	if (ofs == 0)
		return (1);
	if (map->map[li][ofs] == map->empty)
	{	
		mini = ft_min(temp[0][ofs - 1], temp[0][ofs]);
		mini = ft_min(mini, temp[1][ofs - 1]);
		return (mini + 1);
	}
	return (0);
}

int	**new_temp(int size)
{
	int	**temp;
	int	i;

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
	i = 0;
	while (i < size)
	{
		temp[0][i] = 0;
		temp[1][i] = 0;
		i++;
	}
	return (temp);
}

void	free_temp(int **temp)
{
	free(temp[0]);
	free(temp[1]);
	free(temp);
}

void	set_square(int x, int y, int size, t_soluce *square)
{
	square->size = size;
	square->x = x;
	square->y = y;
}

t_soluce	*solve_map(t_struct_map *map, t_soluce *soluce)
{
	int			line;
	int			offset;
	int			**temp;

	
	temp = malloc(1);
	temp = new_temp(map->size);
	
	if (temp == 0)
		return (0);
	line = 0;
	while (line < map->size)
	{
		offset = 0;
		while (offset < map->size)
		{
			ft_putnbr(line);
			ft_putnbr(offset);
			temp[1][offset] = compute(temp, map, line, offset);
			if (temp[1][offset] > soluce->size)
				set_square(offset, line, temp[1][offset], soluce);
			offset++;
		}
		ft_swap(temp);
		line++;
	}
	free(temp);
	return (soluce);
}
