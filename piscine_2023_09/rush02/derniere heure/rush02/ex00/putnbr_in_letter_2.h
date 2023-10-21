/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_in_letter_2.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:53:24 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 13:43:58 by lisambet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTNBR_IN_LETTER_2_H
# define PUTNBR_IN_LETTER_2_H
# include "unistd.h"
# include "struct.h"
# include "ft_string.h"

int		is_same(char *s1, char *s2);
void	put_final(char *str_nb, t_dict *dict, int space);
int		max_order_in_dict(t_dict *dict);

#endif
