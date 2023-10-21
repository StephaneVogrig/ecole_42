/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:46:34 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/09 11:05:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_strlen(char *str)
{
	int len_ft;
	int len_string;
	char *error;
	
	error = "";
	len_ft = ft_strlen(str);
	len_string = strlen(str);
	if (len_ft != len_string)
		error = " error";
	
	printf("\"%s\" : \"%d\" (%d)%s\n", str, len_ft, len_string, error);
}

void	test_ft_strcmp(char *s1, char *s2)
{
	int diff_ft;
	int diff_string;
	char *error;
	
	error = "";
	diff_ft = ft_strcmp(s1, s2);
	diff_string = strcmp(s1, s2);
	if (diff_ft != diff_string)
		error = " error";
	printf("\"%s\" / \"%s\" : %d (%d)%s\n", s1, s2, diff_ft, diff_string, error);
}

void	test_ft_swap(int *a, int *b)
{
	int	_a;
	int	_b;
	char *error;
	
	_a = *a;
	_b = *b;
	error = "";
	ft_swap(a, b);
	if(*a != _b || *b != _a)
		error = "error";
	printf("entree %d:%d, sortie %d:%d %s\n", _a, _b, *a, *b, error);
}
int	main(void)
{
	ft_putstr("test ft_putchar\n");
	ft_putstr("attendu \"Z\" : ");
	ft_putchar('Z');
	ft_putstr("\n");
	ft_putstr("-------------------------------------------------------\n");
	ft_putstr("test ft_swap\n");
	int	a = 1;
	int	b = 2;
	test_ft_swap(&a, &b);
	ft_putstr("-------------------------------------------------------\n");
	ft_putstr("test ft_putstr\n");
	ft_putstr("attendu \"Bonjour\" : ");
	ft_putstr("Bonjour");
	ft_putstr("\n");
	ft_putstr("-------------------------------------------------------\n");
	ft_putstr("test ft_strlen\n");
	test_ft_strlen("42");
	test_ft_strlen("Bonjour");
	test_ft_strlen("");
	test_ft_strlen("Qu'il fait bon ce soir!");
	ft_putstr("-------------------------------------------------------\n");
	ft_putstr("test ft_strcmp\n");
	test_ft_strcmp("Bonjour", "Bonjour");
	test_ft_strcmp("bonjour", "Bonjour");
	test_ft_strcmp("", "");
	test_ft_strcmp("bonjour", "");
	test_ft_strcmp("", "bonjour");
	ft_putstr("-------------------------------------------------------\n");
	ft_putstr("end test\n");

	return (0);
}
