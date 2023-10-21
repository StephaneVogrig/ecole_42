/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:36:24 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/12 12:21:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_strs_to_tab.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

void	run(int size, char **strs)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(size, strs);
	ft_show_tab(tab);
}

int	run_with_own_value(void)
{
	char	**strs;

	strs = malloc(4 * sizeof(char *));
	if (strs == 0)
		return (1);
	strs[0] = "bonjour";
	strs[1] = "merci";
	strs[2] = "au revoir";
	strs[3] = "";
	run(4, strs);
	free(strs);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		run_with_own_value();
	else
		run(argc - 1, argv + 1);
	return (0);
}
