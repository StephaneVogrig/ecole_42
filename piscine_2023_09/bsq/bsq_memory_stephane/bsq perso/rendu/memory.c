/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:56:43 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/09 23:47:33 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "memory.h"

char	*ft_add(char *str)
{
	int		len;
	char	*cpy;

	len = 0;
	while (str[len])
		len++;
	cpy = malloc ((len + 1000) * sizeof(char));
	len = 0;
	while (str[len])
	{
		cpy[len] = str[len];
		len++;
	}
	cpy[len] = c;
	cpy[len + 1] = '\0';
	free(str);
	return (cpy);
}
