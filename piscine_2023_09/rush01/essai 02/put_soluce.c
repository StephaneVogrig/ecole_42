/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:12:13 by qdeviann          #+#    #+#             */
/*   Updated: 2023/09/30 18:30:00 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_soluce(int soluce[4][4])
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			temp = soluce[i][j] + '0';
			write(1, &temp, 1);
			if (j < 3)
			{
				write(1, " ", 1);
			}
			else
			{
				write(1, "\n", 1);
			}
		j++;
		}
	i++;
	}
}