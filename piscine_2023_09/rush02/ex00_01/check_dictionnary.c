/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dictionnary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisambet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:56:04 by lisambet          #+#    #+#             */
/*   Updated: 2023/10/08 16:25:50 by lisambet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "parsing.h"
#include "putnbr_in_letter_2.h"
#include "struct.h"

int	check_dict(t_dict *dict1, t_dict *dict2_dflt, char *file_n1, char *file_n2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	parsing(dict2_dflt, file_n2);
	parsing(dict1, file_n1);
	while (dict2_dflt[i].str_nb != 0)
	{
		while (dict1[j].str_nb != 0)
		{
			if (is_same(dict2_dflt[i].str_nb, dict1[j].str_nb) == 1)
				check++;
			j++;
		}
		j = 0;
		i++;
	}
	if (check == 32)
		return (1);
	return (0);
}
