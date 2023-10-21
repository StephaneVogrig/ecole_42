/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 03:26:30 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/22 03:53:54 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(tab1, 5);
	print_tab(tab1, 5);
	printf("\n");
	ft_rev_int_tab(tab2, 6);
	print_tab(tab2, 6);
}
