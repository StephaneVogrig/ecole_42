/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:44:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/25 23:02:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_numeric.c"

int main(void)
{
	int	isnumeric;

	isnumeric = ft_str_is_numeric("1546546654e65465");
	if(isnumeric)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
