/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:47:56 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/26 09:07:49 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize_if_needed(char *c, int flag)
{
	if (flag)
		*c = *c - 32;
}

char	*ft_strcapitalize(char *str)
{
	int		flagforup;
	char	*c;

	flagforup = 1;
	c = str;
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			capitalize_if_needed(c, flagforup);
			flagforup = 0;
		}		
		else if (*c >= 'A' && *c <= 'Z')
		{
			if (!flagforup)
				*c = *c + 32;
			flagforup = 0;
		}
		else if (*c >= '0' && *c <= '9')
			flagforup = 0;
		else
			flagforup = 1;
		c++;
	}
	return (str);
}
