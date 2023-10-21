/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:33:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 01:35:58 by svogrig          ###   ########.fr       */
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

/*
void	run_bsq(t_buffer_entry *entry)
{
	t_struct_map	*map;
	t_soluce		*soluce;

	soluce = soluce_init();
	
	//if (is_invalide(entry))
		//write(2, "map error\n", 10);
	map = transfer_to_map(entry);
	soluce = solve_map(map, soluce);
	
}*/
