/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_fibonacci.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:21:10 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/02 14:51:28 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_fibonacci.c"

void	test(int nb, int soluce)
{
	printf("fibonacci de %d = %d (%d)\n", nb, ft_fibonacci(nb), soluce);
}

int	main(void)
{
	test(-10, -1);
	test(0, 0);
	test(1, 1);
	test(2, 1);
	test(3, 2);
	test(4, 3);
	test(5, 5);
	test(6, 8);
	test(7, 13);
	test(8, 21);
	test(9, 34);
	test(10, 55);
	test(15, 610);
}
