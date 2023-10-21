/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 03:41:08 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 05:35:53 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strlowcase.c"

int main(void)
{
	char	str0[] = "BJKLFAJHAGJHARGH 1654aerw090675/.,sw1!@#";
	char	*str;

	str = ft_strlowcase(str0);
	while (*str != '\0')
		write(1, str++, 1);
}
