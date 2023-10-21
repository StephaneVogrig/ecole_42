/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:50:05 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 14:44:29 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_solve.h"
#include <stdio.h>

int	compute(int **temp, t_struct_map *map, int li, int ofs)
{
	int	mini;

	//printf("compute");	
	//printf("li: %d ofs: %d\n", li, ofs);
	if (map->map[li][ofs] == map->obstacle)
		return (0);
	if (li == 0)
	{
		//printf(" li ");
		return (1);
	}
	if (ofs == 0)
	{
		//printf(" ofs ");
		return (1);
	}
	if (map->map[li][ofs] == map->empty)
	{	
		mini = ft_min(temp[0][ofs - 1], temp[0][ofs]);
		//printf("mini: %d temp0-1: %d temp0x: %d\n", mini, temp[0][ofs -1], temp[0][ofs]);
		mini = ft_min(mini, temp[1][ofs - 1]);
		//printf("mini: %d temp1-1: %d\n", mini, temp[1][ofs-1]);
		//printf(" ok ");
		return (mini + 1);
	}
	//printf(" ok\n");
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
	//printf("square");
	square->size = size;
	square->x = x;
	square->y = y;
	//printf(" ok\n");
}

t_soluce	*solve_map(t_struct_map *map/*, t_soluce *soluce*/)
{
	int			line;
	int			offset;
	int			**temp;
	t_soluce	*soluce;
	int			soluce_size;

	soluce_size = 0;	
	soluce = malloc(sizeof(t_soluce));
	temp = malloc(1);
	temp = new_temp(map->size);
	if (temp == 0)
		return (0);
	line = 0;
	//printf("start solve\n");
	while (line < map->size)
	{
		//printf("map size: %d\n", map->size);
		offset = 0;
		while (offset < map->size)
		{
			//ft_putnbr(line);
			//ft_putnbr(offset);
			temp[1][offset] = compute(temp, map, line, offset);
			printf("%d ", temp[1][offset]);
			if (temp[1][offset] > soluce_size)
			{
				soluce_size = temp[1][offset];	
				//printf("l%d c%d s%d", line, offset, soluce_size);
				set_square(offset, line, soluce_size, soluce);
			//printf(" |l%dc%ds%d| ", soluce->y, soluce->x, soluce->size);
			}
			else
				//printf("  l%dc%ds%d  ", line, offset, temp[1][offset]);
			
			offset++;
		}
		printf("\n");
		//printf("soluce:\nx: %d\ny: %d\nsize: %d\n", soluce->x, soluce->y, soluce->size);
		ft_swap(temp);
		line++;
	}
	//printf("end solve\n");
	free(temp);
	//printf("x: %d y: %d soluce: %d", soluce->x, soluce->y, soluce->size);
	//set_square(0, 0, 0, soluce);
	return (soluce);
}
