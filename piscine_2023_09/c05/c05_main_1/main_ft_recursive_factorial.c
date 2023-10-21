/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:31:05 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/02 11:35:08 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_recursive_factorial.c"

void	test(int nb, int soluce)
{
	int		result;
	char	*error;
	result = ft_recursive_factorial(nb);
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
