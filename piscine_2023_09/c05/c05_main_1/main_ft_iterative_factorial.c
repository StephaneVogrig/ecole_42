/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:14:23 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/02 00:32:43 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_iterative_factorial.c"

void	test(int nb, int soluce)
{
	int		result;
	char	*error;
	result = ft_iterative_factorial(nb);
	if (result == soluce)
		error = "";
	else
		error = "error";
	printf("Factorielle %d = %d (%d) %s\n", nb, result, soluce, error );
}

int	main(void)
{
	test(-10, 0);
	test(0, 1);
	test(1, 1);
	test(2, 2);
	test(3, 6);
	test(4, 24);
	test(5, 120);
	test(6, 720);
	test(7, 5040);
	test(10, 3628800);
	test(11, 39916800);
	test(12, 479001600);

	return (0);
}
