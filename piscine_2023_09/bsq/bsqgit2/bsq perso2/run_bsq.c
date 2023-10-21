/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:33:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 14:29:37 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "run_bsq.h"
/*
int	check_line(t_buffer_entry *entry)
{
	int	i;
	
	i = 0;
	

}


int	check_entete(t_buffer_entry *entry)
{



}


int	is_invalide(t_buffer_entry *entry)
{
	int	ok;
	
	ok = check_entete(entry);
	if(ok)
		ok = check_line(entry);
	return (ok);
}

*/
t_soluce	*soluce_init(void)
{
	t_soluce	*soluce;

	soluce = malloc(sizeof(t_soluce));
	if (soluce == 0)
		return (0);
	soluce->x = 0;
	soluce->y = 0;
	soluce->size = 0;
	return (soluce);
}

#include <stdio.h>
#include "show_map.h"

void	run_bsq(t_buffer_entry *entry)
{
	t_struct_map	*map;
	t_soluce		*soluce;

	//printf("struct:\nbuffer:\n%s\npos: %d\nsize: %d\n", entry->buffer, entry->pos, entry->size);
	soluce = soluce_init();
	//printf("x: %d y: %d size: %d\n", soluce->x, soluce->y, soluce->size);
	//if (is_invalide(entry))
		//write(2, "map error\n", 10);
	map = transfer_to_map(entry);
	printf("map size: %d\nempty: %c\nobstacle: %c\nreplace: %c\n", map->size, map->empty, map->obstacle, map->replace);
	
	soluce = solve_map(map);
	printf("x: %d y: %d soluce: %d", soluce->x, soluce->y, soluce->size);
	show_map(map, soluce);	
}
