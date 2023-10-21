/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:01:57 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 17:04:31 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

void	test(char *s1, char *s2)
{
	int	r1;
	int	r2;
	
	r1 = ft_strcmp(s1, s2);
	r2 = strcmp(s1, s2);
	printf("\"%s\" \"%s\" = %d %d\n", s1, s2, r1, r2);
}

int	main(void)
{
	test("password", "password");
	
	test("password", "pass");
	
	test("password", "grer");
	
	test("password", "passwordi");
	
	test("password", "");
	
	test("", "passwordi");
	
	test("", "");
}
