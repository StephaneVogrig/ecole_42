/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:15:40 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/04 11:11:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 0)
	{
		while (*argv[0] != '\0')
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
