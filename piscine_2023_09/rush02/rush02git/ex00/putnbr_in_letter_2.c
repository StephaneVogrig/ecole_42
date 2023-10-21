/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_in_letter_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:44:02 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/08 13:27:15 by lisambet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putnbr_in_letter_2.h"
#include <unistd.h>

int	is_same(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}

void	put_final(char *str_nb, t_dict *dict, int space)
{
	int	i;

	i = 0;
	while (dict[i].str_nb[0] != '\0')
	{
		if (is_same(str_nb, dict[i].str_nb))
		{
			if (space)
				write(1, " ", 1);
			ft_putstr(dict[i].str_letters);
			break ;
		}
		i++;
	}
}

int	max_order_in_dict(t_dict *dict)
{
	int	i;
	int	j;
	int	max_order;

	i = 0;
	max_order = 0;
	while (i <= 32)
	{
		if (dict[i].str_nb[0] == '1')
		{
			j = 0;
			while (dict[i].str_nb[j] == '0')
				j++;
			if (dict[i].str_nb[j] == '\0' && j > max_order)
					max_order = j;
		}		
		i++;
	}
	max_order = (max_order - 1) / 3;
	return (max_order);
}
