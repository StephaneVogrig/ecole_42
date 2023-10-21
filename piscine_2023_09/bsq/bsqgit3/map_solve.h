/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solve.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:27:03 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 14:29:25 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_SOLVE_H
# define MAP_SOLVE_H

# include <stdlib.h>
# include "memory.h"
# include "ft_math.h"

int			compute(int **temp, t_struct_map *map, int li, int ofs);
int			**new_temp(int size);
void		free_temp(int **temp);
void		set_square(int x, int y, int size, t_soluce *square);
t_soluce	*solve_map(t_struct_map *map);

#endif
