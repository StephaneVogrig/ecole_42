/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 00:24:25 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/22 00:37:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptrdiv;
	int	*ptrmod;

	a = 489;
	b = 10;
	ptrdiv = &div;
	ptrmod = &mod;
	ft_div_mod(a, b, ptrdiv, ptrmod);
	printf("a = %d, b = %d, div = %d, mod = %d", a, b, div, mod);
}
