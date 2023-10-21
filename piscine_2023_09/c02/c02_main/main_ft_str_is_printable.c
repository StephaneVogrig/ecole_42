/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:17:20 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 01:37:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	int	isprintable;

	isprintable = ft_str_is_printable("ja;ldkfja'lgjd654'dg");
	if (isprintable)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
