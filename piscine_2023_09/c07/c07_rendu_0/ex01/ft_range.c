/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:55:59 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/05 16:58:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = malloc(size * sizeof(int));
	if (array == 0)
		return (0);
	i = 0;
	while (i < size)
	{				
		array[i] = min + i;
		i++;
	}
	return (array);
}
