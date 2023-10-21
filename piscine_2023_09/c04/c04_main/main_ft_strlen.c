/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:46:30 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 11:55:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"
#include <string.h>

void	test(char *str)
{

	printf("\"%s\" %d | %ld\n", str, ft_strlen(str), strlen(str));	
}

int	main(void)
{
	test("bonjour");
	test("");	
}
