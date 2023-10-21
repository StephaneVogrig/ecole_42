/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 01:07:58 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/23 19:51:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && x > 1))
				ft_putchar('A');
			else if ((l == 1 && c == x) || (l == y && (c == 1 || x == 1)))
				ft_putchar('C');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
