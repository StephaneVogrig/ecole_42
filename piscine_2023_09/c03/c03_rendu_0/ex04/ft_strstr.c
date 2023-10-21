/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:58:42 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/27 19:14:53 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i] == to_find[j]) && (to_find[j] != '\0'))
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i - j);
		i = i - j + 1;
	}
	return (0);
}
