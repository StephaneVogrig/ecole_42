/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:36:33 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/25 21:16:47 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_alpha.c"

int	main(void)
{
	int	isalpha;

	isalpha = ft_str_is_alpha("afhkweqhfhfgfg");
	if(isalpha)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
