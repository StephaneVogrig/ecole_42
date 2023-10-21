/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:16:10 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/25 23:39:03 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	int	islowercase;

	islowercase = ft_str_is_lowercase("jahfkjhfelkjhqfh");
	if(islowercase)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
