/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:15:27 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/10 00:39:59 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "memory.h"

int	check_input(char *str, int i)
{
	int	j;
	int	k;

	k = 0;
	(void) str;
	while (str[k])
	{
		if (str[k] == ';')
		{
			write(2, "map error\n", 10);
			exit(1);
		}
		k++;
	}
	j = 5;
	return (j - i);
}

char	*read_stdin(void)
{
	char	*buffer;
	int		i;
	int		nb_lines;

	i = 0;
	nb_lines = 0;
	buffer = malloc (1000 * sizeof(char));
	buffer1 = malloc (1000 * sizeof(char));
	while (read(0, &buffer1, 1000) == 1000)
	{
		input = ft_add(buffer, buffer1);
		if (c == '\n')
		{
			nb_lines = check_input(buffer, i);
			if (nb_lines == 0 || nb_lines == -1)
				break ;
			i++;
		}
	}
	//printf("%s", input);
	return (buffer);
}

int	main(int argc, char **argv)
{
	//char	*map;
	(void) argv;
	if (argc == 1)
	{
		read_stdin();
	}
	return (0);
}
