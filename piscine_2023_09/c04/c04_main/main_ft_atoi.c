/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:53:33 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 21:10:18 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.c"


int main(void)
{
	char tab[] = "    ---+--+1234ab567";
	printf("\"%s\" = %d\n", tab, ft_atoi(tab));
	char tab1[] = "    -- -+--+1234ab567";
	printf("\"%s\" = %d\n", tab1, ft_atoi(tab1));
	char tab2[] = "    --+--+1234ab567";
	printf("\"%s\" = %d\n", tab2, ft_atoi(tab2));
	char tab3[] = "    ---+--+1234ab567";
	printf("\"%s\" = %d\n", tab3, ft_atoi(tab3));
	char tab4[] = "    ---+--+1234567";
	printf("\"%s\" = %d\n", tab4, ft_atoi(tab4));
	char tab5[] = "    ---+--+1234567 ";
	printf("\"%s\" = %d\n", tab5, ft_atoi(tab5));		
}
