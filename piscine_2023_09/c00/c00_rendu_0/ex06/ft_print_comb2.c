/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:04:31 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/21 12:37:48 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int i, int j)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = 48 + (i / 10);
	a2 = 48 + (i % 10);
	b1 = 48 + (j / 10);
	b2 = 48 + (j % 10);
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (i != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_digit(i, j);
			j++;
		}
		i++;
	}
}
