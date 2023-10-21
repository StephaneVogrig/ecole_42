/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:39:12 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 11:51:03 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

void	test(char dest1[], char *src, int nb)
{	
	char dest2[100];
	strcpy(dest2, dest1);
	
	printf("\"%s\" + \"%s\" : %d\n", dest1, src, nb);
	printf("ft_strncat = \"%s\"\n", ft_strncat(dest1, src, nb));
	printf("strncat    = \"%s\"\n\n", strncat(dest2, src, nb));
}

int	main(void)
{
	char	dest1[100] = "Destination";
	test(dest1, "source", 4);
	char	dest2[100] = "Destination";
	test(dest2, "", 4);
	
	char	dest3[100] = "";
	test(dest3, "jklafhg", 4);
	char	dest4[100] = "";
	test(dest4, "", 4);
	
	char	dest5[100] = "Destination";
	test(dest5, "source", 0);
	char	dest6[100] = "Destination";
	test(dest6, "", 0);
	
	char	dest7[100] = "";
	test(dest7, "jklafhg", 0);
	char	dest8[100] = "";
	test(dest8, "", 0);
}
