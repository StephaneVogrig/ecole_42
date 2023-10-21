/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_soluce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:40:25 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/30 21:42:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_soluce(int **view, int **soluce)
{
	//int	possible_line[24][4];
	
	//gen_possible_line(possible_line);

	int i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			soluce[i][j] = view	[i][j];
			j++;
		}
		i++;
	}
	return (0);
}
