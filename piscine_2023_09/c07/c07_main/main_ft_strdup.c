/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:57:16 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/04 14:24:37 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	is_same(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}

void	test(char *src)
{
	char	*copy;
	char	*error;

	copy = ft_strdup(src);
	if (is_same(src, copy))
		error = "";
	else
		error = "error";
	printf("\"%s\" , \"%s\" %s\n", src, copy, error);
	free(copy);
}

int	main(void)
{
	test("Bonjour");
	test("");
	test("Bon jour");
	test("Bonjour");
	test("Bon\tjour");
}
