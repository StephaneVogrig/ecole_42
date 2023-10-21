/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:02:05 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/04 02:10:49 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_string(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

int	compare_string(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (compare_string(argv[i], argv[j]) > 0)
			{
				swap(&argv[i], &argv[j]);
			}	
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		put_string(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
