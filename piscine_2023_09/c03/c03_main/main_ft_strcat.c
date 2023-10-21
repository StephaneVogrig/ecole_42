/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:19:34 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 11:14:01 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int	main(void)
{
	char	dest1[100] = "Destination";
	char	dest2[100] = "Destination";
	char	*src1 = "source";
	
	printf("\"%s\"\n", ft_strcat(dest1, src1));
	printf("\"%s\"\n\n", strcat(dest2, src1));
	
	char	dest3[100] = "";
	char	dest4[100] = "";
	char	*src2 = "jklafhg";
	
	printf("\"%s\"\n", ft_strcat(dest3, src2));
	printf("\"%s\"\n\n", strcat(dest4, src2));
	
	char	dest5[100] = "Destination";
	char	dest6[100] = "Destination";
	char	*src3 = "";
	
	printf("\"%s\"\n", ft_strcat(dest5, src3));
	printf("\"%s\"\n\n", strcat(dest6, src3));

}
