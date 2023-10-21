/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_all_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:51:57 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/03 12:38:15 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_prime.c"
#include <stdio.h>

int	main(void)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	//while (i <= 2147483647)
	
	while (count <= 100000)
	{
		if (ft_is_prime(i))
		{
			printf("%d ", i);
			count++;
			if (count % 20 == 0)
				printf("\n");
		}
		i++;
	}
}
