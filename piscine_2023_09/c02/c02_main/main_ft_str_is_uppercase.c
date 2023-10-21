/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:01:03 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 00:30:45 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	int	isuppercase;

	isuppercase = ft_str_is_uppercase("JHHHGKGHGGHGFHF");
	if (isuppercase)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
