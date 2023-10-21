/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_sort_int_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:08:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/24 21:33:16 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {7, 6, 5, 4, 3, 2, 1, 89, 52, -9, 10};
	int	i;

	printf("start main...");
	ft_sort_int_tab(tab, 11);
	i = 0;
	while (i < 11)
	{
		printf("%d,", tab[i]);
		i++;
	}
	printf("End main!");
}
