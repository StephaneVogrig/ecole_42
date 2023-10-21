/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 04:51:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/10 16:42:05 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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
