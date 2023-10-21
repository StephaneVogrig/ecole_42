/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_steph.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:21:54 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 10:24:21 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_STEPH_H
# define PARSING_STEPH_H
# include "struct.h"
# include "letters_count.h"

t_dict	*parsing_steph(char *filename);
t_dict	*parse(char *buffer);

#endif
