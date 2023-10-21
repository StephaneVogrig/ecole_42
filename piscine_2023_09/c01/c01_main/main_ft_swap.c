/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:46:49 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/22 00:19:41 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 10;
	b = 99;

	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a = %d, b = %d", a, b);
}
