/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:22:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 17:42:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"
#include <stdio.h>

int	main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(1008);
	printf("\n");
	ft_putnbr(-3500);
	printf("\n");
}
