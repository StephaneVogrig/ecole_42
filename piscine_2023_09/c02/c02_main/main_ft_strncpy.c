/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:51:39 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 00:58:53 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strncpy.c"
#include <string.h>

void	putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(void)
{
	char	src[] = "encore un test strncpy";
	char	dest[100] = "00000000000000000000000000000000000000000000000000";
	unsigned int	n;

	n = 30;

	strncpy(dest, src, n);
	//ft_strncpy(dest, src, n);
	putstr(dest);
	return (0);
}
