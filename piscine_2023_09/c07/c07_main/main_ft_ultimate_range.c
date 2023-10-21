/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:07:47 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/05 11:57:24 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

void	test(int min, int max)
{
	int *int_array;
	int	i;
	int	size;

	size = ft_ultimate_range(&int_array, min, max);
	if (int_array)
	{
		printf("array[%d] = {", size);
		i = 0;
		while (i < size)
		{
			printf("%d, ", int_array[i]);
			i++;
		}
		printf("}");
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
	return (0);
}
