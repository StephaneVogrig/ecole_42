/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:10:49 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/04 21:24:27 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

void	test(int min, int max)
{
	int *int_array;
	int	i;
	int	size;

	int_array = ft_range(min, max);
	if (int_array)
	{
		size = max - min;
		i = 0;
		while (i < size)
		{
			printf("%d, ",int_array[i]);
			i++;
		}
	}
	free(int_array);
	printf("\n");
}

int	main(void)
{
	test(-10, 10);
	test(-30, -10);
	test(10, 20);
	test(10, 10);
	test(100, 10);
	test(0, 100);
}
