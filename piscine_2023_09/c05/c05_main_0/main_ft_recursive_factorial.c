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

int	main(void)
{

	printf("Factorielle -10 (attendu 1) = %d\n", ft_recursive_factorial(-10));
	printf("Factorielle 0 (attendu 1) = %d\n", ft_recursive_factorial(0));
	printf("Factorielle 1 (attendu 1) = %d\n", ft_recursive_factorial(1));
	printf("Factorielle 2 (attendu 2) = %d\n", ft_recursive_factorial(2));
	printf("Factorielle 3 (attendu 6) = %d\n", ft_recursive_factorial(3));
	printf("Factorielle 4 (attendu 24) = %d\n", ft_recursive_factorial(4));
	printf("Factorielle 10 (attendu 3628800) = %d\n", ft_recursive_factorial(10));
	printf("Factorielle 12 (attendu 3628800) = %d\n", ft_recursive_factorial(12));

	return (0);
}
