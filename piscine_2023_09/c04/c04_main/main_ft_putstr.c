/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:57:26 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/28 12:18:18 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putstr.c"

void	test(char *str)
{
	ft_putstr(str);
	write(1, "\n", 1);
}

int	main(void)
{
	test("Bonjour");
	test("");
	test("asjklfg;qhg");
}
