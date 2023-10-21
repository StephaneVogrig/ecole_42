/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:46:07 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 05:42:08 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strupcase.c"

int	main(void)
{
	char	str0[] = "ma chaine gre,.[weqas.m5468]";
	char	*str;

	str = ft_strupcase(str0);
	while(*str != '\0')
		write(1, str++, 1);
}
