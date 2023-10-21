/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:38 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/09 16:27:30 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

void	test(int a)
{
	int		b;
	int		c;
	char	*error;

	c = a;
	b = ABS(a) * 1;
	error = "";
	if ( a < 0)
		c = -a;
	if (c != b)
		error = " error";
	printf("entree : %d, sortie %d (%d) %s\n", a, b, c, error);
}

int	main(void)
{
	test(10);
	test(-10);
	test(0);
}
