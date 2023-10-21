//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:06:35 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/06 00:21:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*str;
	
	printf("\ntest 1 : ");
	str = ft_strjoin(argc, argv, ".");
	printf("\"%s\"\n", str);
	free (str);
	
	printf("\ntest 2 : ");
	str = ft_strjoin(0, argv, "./.");
	printf("\"%s\"\n", str);
	free (str);
	
	printf("\ntest 3 : ");
	char	*strs0[] = {"ton main de test"};
	str = ft_strjoin(1, strs0, " ... ");
	printf("\"%s\"\n", str);
	free (str);

	printf("\ntest 4 : ");
	char	*strs1[] = {"ton main de test", "est pourri"};
	str = ft_strjoin(2, strs1, "+++++++++++++++++++++++++++++");
	printf("\"%s\"\n", str);
	free (str);

	printf("\ntest 5 : ");
	char	*strs2[] = {"ton main de test", "est pourri", "puissance 1000"};
	str = ft_strjoin(3, strs2, " ");
	printf("\"%s\"\n", str);
	free (str);

	printf("\ntest 6 : ");
	char	*strs3[] = {"ton main de test", "est pourri", "puissance 1000", "et encore"};
	str = ft_strjoin(4, strs3, "");
	printf("\"%s\"\n", str);
	free (str);

	printf("\ntest 7 : ");
	char	*strs4[] = {"je", "suis", "gentil"};
	str = ft_strjoin(3, strs4, "_");
	printf("\"%s\"\n", str);
	free (str);
	
	printf("\ntest 8 : ");
	char	*strs5[] = {"aa", "bb", "cc", "dd"};
	str = ft_strjoin(4, strs5, "-");
	printf("\"%s\"\n", str);
	free (str);
	
	printf("\ntest 8 : ");
	char	*strs6[] = {"mais je t'adore!"};
	str = ft_strjoin(1, strs6, "-");
	printf("\"%s\"\n", str);
	free (str);
	
	return (0);
}
