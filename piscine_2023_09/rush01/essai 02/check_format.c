/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:46:00 by lmugot            #+#    #+#             */
/*   Updated: 2023/10/01 11:43:25 by lmugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_format(char *argv)
{
	int	i;
	int	pair;

	i = 0;
	pair = 1;
	while (argv[i] != '\0')
	{	
		if (pair == 1)
			if (argv[i] < 49 || argv[i] > 52)
				return (0);
		if (pair == -1)
		{
			if (argv[i] != 32)
				return (0);
		}	
		pair = pair * -1;
		i++;
	}
	if (i != 31)
		return (0);
	else
		return (1);
}	
