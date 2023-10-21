/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:40:14 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 23:40:41 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	test(char *str, char *to_find)
{
	char	str_1[100];
	char	str_2[100];
	
	ft_strcpy(str_1, str);
	ft_strcpy(str_2, str);
	
	printf("\"%s\"   \"%s\"\n", str, to_find);
	printf("ft_ = \"%s\"\n", ft_strstr(str_1, to_find));
	printf("std = \"%s\"\n\n", strstr(str_2, to_find));
}

int	main(void)
{
	test("bonjour le monde", "jour");
	test("bonjour le monde", "");
	test("", "jour");
	test("", "");
	test("bonjour le mondew", "w");
	test("hello le mondmondew", "monde");
	test("mond", "monde");
	test("abjsd", "monde");
	test("mondmondmond", "monde");
}
