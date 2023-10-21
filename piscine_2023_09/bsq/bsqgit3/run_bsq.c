/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_bsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:33:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 21:25:59 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "run_bsq.h"
#include "show_map.h"
#include "check_map.h"
#include "ft_string.h"

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

void	run_bsq(t_buffer_entry *entry)
{
	t_struct_map	*map;
	t_soluce		*soluce;
	int				err;

	err = 0;
	soluce = soluce_init();
	map = transfer_to_map(entry);
	err = check_invalid(map, entry->buffer);
	if (err != 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	soluce = solve_map(map);
	show_map(map, soluce);
	free(map);
}
