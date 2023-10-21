/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcannaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:54:59 by gcannaud          #+#    #+#             */
/*   Updated: 2023/10/07 17:42:54 by gcannaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "parsing.h"
#include "ft_string.c"

int check_arg_nbr(char *argv)
{
	int i;

	i = 0;
	while (argv[i] >= '0' && argv[i] <= '9')
		i++;
	if (argv[i] == '\0')
		return (1);
	return (0);
}

int check_dictionary(char *argv)
{
	int fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	return (1);
}

int main(int argc, char **argv)
{
	t_dict	*dict;
	
	if (argc == 2)
	{
		if (ft_str_is_numeric(char *str))
		if (check_arg_nbr(argv[1]) == 1)
			if (0) //parsing(dict, "numbers.dict") == 1)
				write (1, "\n", 1);
			else 
				write (1, "Dict Error\n", 11);
		else
			write (1, "Error\n", 6);
	}
	else if (argc == 3)
	{
		if ((check_arg_nbr(argv[2]) == 1) && (check_dictionary(argv[1]) == 1))
			if (0)  //parsing(dict, argv[1]) == 1)
				write (1, "\n", 1);
			else
				write (1, "Dict Error\n", 11);
		else
			write (1, "Error\n", 6);
	}
	else
		write (1, "Error\n", 6);
}
