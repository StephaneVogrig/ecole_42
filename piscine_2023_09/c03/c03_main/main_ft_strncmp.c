/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ftstrncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:18:52 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 08:49:49 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

void	test(char *s1, char *s2, unsigned int n)
{
	int	r1;
	int	r2;
	
	r1 = ft_strncmp(s1, s2, n);
	r2 = strncmp(s1, s2, n);
	printf("\"%s\" \"%s\" %d %d %d\n", s1, s2, n, r1, r2);
}

int	main(void)
{
	test("password", "password", 0);
	test("password", "password", 1);
	test("password", "password", 3);
	test("password", "password", 20);
	
	test("password", "pass", 0);
	test("password", "pass", 1);
	test("password", "pass", 3);
	test("password", "pass", 20);
	
	test("password", "grer", 0);
	test("password", "grer", 1);
	test("password", "grer", 3);
	test("password", "grer", 20);
	
	test("password", "passwordi", 0);
	test("password", "passwordi", 1);
	test("password", "passwordi", 3);
	test("password", "passwordi", 20);
	
	test("password", "", 0);
	test("password", "", 1);
	test("password", "", 3);
	test("password", "", 20);
	
	test("", "passwordi", 0);
	test("", "passwordi", 1);
	test("", "passwordi", 3);
	test("", "passwordi", 20);
	
	test("", "", 0);
	test("", "", 1);
	test("", "", 3);
	test("", "", 20);
}
