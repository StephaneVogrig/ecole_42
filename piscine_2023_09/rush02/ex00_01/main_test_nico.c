/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nledent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:11:30 by nledent           #+#    #+#             */
/*   Updated: 2023/10/08 15:59:59 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "parsing.h"

int	main(int argc, char **argv)
{
	t_dict *dict;
	int lines;
	int	i;

	i = 0;
	(void)argc;
	lines = lines_count(argv[1]);
	dict = malloc((sizeof (t_dict) * (lines + 1) ));
	dict[lines].str_nb = 0;
	dict[lines].str_letters = 0;
	printf("retour de parsing : %d\n",parsing(dict, argv[1]));
	while (i < lines)
	{
		printf("tab1 : %s --- tab2 : %s\n", dict[i].str_nb, dict[i].str_letters);
		i++;
	}
	
	i = 0;
	while (i <= lines)
	{
		free(dict[i].str_letters);
		free(dict[i].str_nb);
		i++;
	}
	free(dict);
	return (0);
}
