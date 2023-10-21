/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:34:43 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/06 00:26:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*copy(char *src, char *dest)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	calculate_size_needed(int nbr_str, char **strs, char *sep)
{
	int	size_total;
	int	i;

	i = 0;
	size_total = 1;
	while (i < nbr_str)
	{
		size_total += ft_strlen(strs[i]);
		i++;
	}
	size_total += ft_strlen(sep) * (nbr_str - 1);
	return (size_total);
}

char	*str_empty(void)
{
	char	*str;

	str = malloc(sizeof(char));
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_result;
	char	*str_pos;
	int		size_result;
	int		i;

	if (size < 1)
		return (str_empty());
	size_result = calculate_size_needed(size, strs, sep);
	str_result = malloc(size_result * sizeof(char));
	if (str_result)
	{
		str_pos = str_result;
		i = 0;
		while (i < size)
		{
			str_pos = copy(strs[i], str_pos);
			i++;
			if (i < size)
				str_pos = copy(sep, str_pos);
		}
		*str_pos = '\0';
	}
	return (str_result);
}
