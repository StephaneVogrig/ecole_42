/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:01:10 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/25 18:57:06 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strcpy.c"

void	putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(void)
{
	char	src[100] = "test strcpy";
	char	dest[100];

	ft_strcpy(dest, src);
	putstr(dest);
	return (0);
}
