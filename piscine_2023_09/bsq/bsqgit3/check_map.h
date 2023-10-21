/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:33:54 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/11 21:33:16 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECK_MAP_H
# define CHECK_MAP_H

# include "memory.h"

int	is_not_valid_param(t_struct_map *map);
int	check_first_line(t_struct_map *map, char *buffer);
int	check_invalid(t_struct_map *map, char *buffer);
#endif
