/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:37:04 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/03 12:00:30 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
si n resiste a tous les essais de division par les entiers inferieurs ou egaux
a racine de n, il est premier
villemin.gerard.free.fr/Wwwgvmm/premier/propriet.htm

*/
#include "ft_is_prime.c"
#include <stdio.h>

void	test(int nb, int soluce)
{
	char *error;
	int	result;
	
	result = ft_is_prime(nb);
	if (result != soluce)
		error = "error";
	else
		error = "";
	printf("%d is prime ? %d (%d) %s\n", nb, result, soluce, error);
}

int	main(void)
{
	test(0, 0);
	test(1, 0);
	test(2, 1);
	test(3, 1);
	test(4, 0);
	test(5, 1);
	test(6, 0);
	test(7, 1);
	test(8, 0);
	test(9, 0);
	test(10, 0);
	test(11, 1);
	test(12, 0);
	test(13, 1);
	test(14, 0);
	test(15, 0);
	test(16, 0);
	test(17, 1);
	test(18, 0);
	test(19, 1);
	test(20, 0);
	test(21, 0);
	test(22, 0);
	test(23, 1);
	test(24, 0);
	test(25, 0);
	test(26, 0);
	test(27, 0);
	test(28, 0);
	test(30, 0);
	test(2147483641, 0);
	test(2147483647, 1);
	test(541, 1);
}
