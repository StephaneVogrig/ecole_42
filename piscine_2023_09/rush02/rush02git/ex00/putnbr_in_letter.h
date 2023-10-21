/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_in_letter.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 02:53:12 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 13:43:18 by lisambet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTNBR_IN_LETTER_H
# define PUTNBR_IN_LETTER_H
# include "struct.h"
# include "ft_string.h"
# include "putnbr_in_letter_2.h"

void	put_ten(char ten, char unit, t_dict *s_dict, int space);
void	put_order(int order, t_dict *s_dict);
void	put_triplet(char *triplet, t_dict *s_dict, int order, int space);
void	fill(char *str, char t1, char t2, char t3);
void	putnbr_in_letter(char *str_nbr, t_dict *s_dict);

#endif
