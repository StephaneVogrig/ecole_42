/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:38:16 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/05 16:59:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*dup;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	src_size++;
	dup = malloc(src_size * sizeof(char));
	if (dup != 0)
	{
		while (src_size >= 0)
		{
			dup[src_size] = src[src_size];
			src_size--;
		}	
	}
	return (dup);
}
