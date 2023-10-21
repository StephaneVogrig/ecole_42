/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:52:35 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/03 12:30:36 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sqrt.c"

/*
le Carre d'un nombre n est egal a la somme des n premiers nombres impairs
permet methode par soustraction des impairs pour determiner si un nombre 
est le carre d'un entier. Voir :
fr.wikihow.com/calculer-une-racine-carree-sans-calculatrice

*/
void	test(int nb, int soluce)
{
	printf("racine de %d = %d (%d)\n", nb, ft_sqrt(nb), soluce);
}

int	main(void)
{
	test(0, 0);
	test(1, 1);
	test(2, 0);
	test(3, 0);
	test(4, 2);
	test(250000, 500);
	test(2147395600, 46340);
	test(2147483647, 0);
}
