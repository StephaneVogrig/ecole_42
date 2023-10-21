/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 06:27:09 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 09:04:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strcapitalize.c"

int main(void)
{
	char	str0[] = "salut, CommEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*str;

	str = ft_strcapitalize(str0);
	while(*str != '\0')
		write(1, str++, 1);
	return (0);
}
