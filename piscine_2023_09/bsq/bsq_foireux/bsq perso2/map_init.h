/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:42:26 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/10 22:04:51 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INIT_H
# define MAP_INIT_H

# include "memory.h"

t_struct_map	*transfer_to_map(t_buffer_entry *buffer_entry);
int				str_to_nb(char *str, int offset);
char			**buffer_to_tab(char *buffer, int offset, t_struct_map map);
int				transfer(char *buffer, t_struct_map *map);

#endif
