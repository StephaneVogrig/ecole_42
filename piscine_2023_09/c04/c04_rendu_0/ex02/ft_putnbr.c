/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:37:49 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 17:39:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > -10 && nb < 10)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			c = -nb;
		}
		else
			c = nb;
	}
	else
	{
		c = nb % 10;
		ft_putnbr(nb / 10);
		if (c < 0)
			c = -c;
	}
	c = '0' + c;
	write(1, &c, 1);
}
