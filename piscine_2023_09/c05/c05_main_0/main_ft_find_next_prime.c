/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_find_next_prime.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:57:45 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/03 15:28:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_find_next_prime.c"
#include <stdio.h>

void	test(int nb, int soluce)
{
	int	prime;
	char *error;

	prime = ft_find_next_prime(nb);
	if (soluce == prime)
		error = "";
	else
		error = "error";
	printf("the next prime number after %d is %d (%d) %s\n", nb, prime, soluce, error);
}

int main(void)
{
	test(-2147483648, 2);
	test(-10, 2);
	test(0, 2);
	test(2, 2);
	test(3, 3);
	test(4, 5);
	test(6, 7);
	test(8, 11);
	test(7884, 7901);
	test(2147483424, 2147483477);
	test(2147483630, 2147483647);
	test(2147483647, 2147483647);

}
