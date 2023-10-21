/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:42:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/11 01:43:59 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUN_BSQ_H
# define RUN_BSQ_H

#include "memory.h"
#include "map_init.h"
#include "map_solve.h"
#include "memory.h"

int	run_bsq(int flux, char *filename);
t_soluce	*soluce_init(void);

#endif
