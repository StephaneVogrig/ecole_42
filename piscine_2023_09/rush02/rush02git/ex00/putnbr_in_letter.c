/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_in_letter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:47:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 13:19:10 by lisambet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "putnbr_in_letter.h"

void	put_ten(char ten, char unit, t_dict *s_dict, int space)
{
	char	str[3];

	str[1] = ten;
	str[2] = unit;
	str[3] = '\0';
	put_final(str, s_dict, space);
}

void	put_order(int order, t_dict *s_dict)
{
	char	*temp;
	int		str_len;
	int		i;

	if (order > 0)
	{
		str_len = order * 3 + 2;
		temp = malloc(str_len * sizeof(char));
		if (temp)
		{
			temp[0] = '1';
			i = 1;
			while (i < str_len)
			{
				temp[i] = '0';
				i++;
			}
			put_final(temp, s_dict, 1);
		}
		free(temp);
	}	
}

void	put_triplet(char *triplet, t_dict *s_dict, int order, int space)
{
	char	digit[2];

	digit[1] = '\0';
	if (triplet[0] != '0')
	{
		digit[0] = triplet[0];
		put_final(digit, s_dict, space);
		put_final("100", s_dict, 1);
	}
	if (triplet[1] == '0')
		put_final(&triplet[2], s_dict, space);
	else if (triplet[1] == '1')
		put_ten(triplet[1], triplet[2], s_dict, space);
	else
	{
		put_ten(triplet[1], '0', s_dict, space);
		put_final(&triplet[2], s_dict, 0);
	}
	put_order(order, s_dict);
}

void	fill(char *str, char t1, char t2, char t3)
{
	str[0] = t1;
	str[1] = t2;
	str[2] = t3;
}

void	putnbr_in_letter(char *str_nbr, t_dict *s_dict)
{
	int		str_nbr_len;
	int		max_order;
	char	str[3];
	int		i;
	int		order;

	str_nbr_len = ft_strlen(str_nbr);
	max_order = max_order_in_dict(s_dict);
	#include <stdio.h>
	printf("%dcoucou\n", str_nbr_len);
	i = str_nbr_len % 3;
	order = (str_nbr_len - 1) / 3;
	if (i == 1)
		fill(str, '0', '0', str_nbr[0]);
	if (i == 2)
		fill(str, '0', str_nbr[0], str_nbr[1]);
	if (i > 0)
		put_triplet(str, s_dict, order, 0);
	while (i < str_nbr_len)
	{	
		fill(str, str_nbr[i], str_nbr[i + 1], str_nbr[i + 2]);
		put_triplet(str, s_dict, order % max_order, 1);
		i += 3;
	}
}
