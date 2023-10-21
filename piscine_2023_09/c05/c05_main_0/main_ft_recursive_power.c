/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:54:28 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/02 12:56:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_power.c"
#include <stdio.h>

void	test(int nb, int power, int result)
{
	printf("%d power %d = %d (%d)\n", nb, power, ft_recursive_power(nb, power), result);
}

int main(void)
{	
	//puissance negative
	test(-5, -5, 0);
	test(0, -3, 0);
	test(10, -6, 0);
	//puissance 0
	test(-5, 0, 1);
	test(10, 0, 1);
	test(0, 0, 1);
	//nombre positif
	test(5, 0, 1);
	test(5, 5, 3125);	
	test(10, 3, 1000);
	test(2, 8, 256);
	//nombre negatifs
	test(-5, 0, 1);
	test(-5, 5, -3125);	
	test(-10, 3, -1000);
	test(-2, 8, 256);
	return (0);
}
