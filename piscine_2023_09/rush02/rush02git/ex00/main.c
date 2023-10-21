/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcannaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:54:59 by gcannaud          #+#    #+#             */
/*   Updated: 2023/10/07 17:44:31 by gcannaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include "struct.h"
#include "parsing.h"
#include "putnbr_in_letter.h"
#include "check_dictionnary.h"

void	dealloc_dict(t_dict *dict)
{
	int	i;
	int	size;
	
	size = lines_count("numbers.dict");
	i = 0;
	while (i <= size)
	{
		free(dict[i].str_letters);
		free(dict[i].str_nb);
		i++;
	}
	free(dict);
}

t_dict	*alloc_dict(t_dict *dict, char *filename)
{
	int	lines;

	lines = lines_count(filename);
	dict = malloc(sizeof(t_dict) * (lines + 1));
	if (dict == 0)
		return (dict);
	dict[lines].str_nb = 0;
	dict[lines].str_letters = 0;
	return (dict);
}

t_dict	*fill_dict(char *filename, t_dict *dict)
{
	int		size_dict;
	int		ok;

	ok = 0;
	dict = alloc_dict(dict, filename);
	if (size_dict > 0){}
		ok = parsing(dict, filename);
	if (ok == 0)
		size_dict = 0;
	return (dict);
}

void	run_putnbr(char *str_nb, t_dict *dict, int size_dict, int ok)
{
	if (ok == 1)
		putnbr_in_letter(str_nb, dict);
	dealloc_dict(dict);
}

int	main(int argc, char **argv)
{
	int		ok;
	int		size_base;
	int		size_user;
	t_dict	*dict_base;
	t_dict	*dict_user;

	dict_base = 0;
	dict_user =0;
	ok = 0;
	if (!(argc == 2 || argc == 3))
		return (msg_error(ok));
	ok = ft_str_is_numeric(argv[argc - 1]);
	if (ok)
	{
		dict_base = fill_dict("numbers.dict", dict_base);
		if (argc == 3)
		{
			dict_user = fill_dict(argv[1], dict_user);
			ok = check_dictionnary(dict_user, dict_base);
			run_putnbr(argv[2], dict_user, size_user, ok);
		}
		run_putnbr(argv[1], dict_base, size_base, argc == 2);
	}
	return (msg_error(ok));
}
