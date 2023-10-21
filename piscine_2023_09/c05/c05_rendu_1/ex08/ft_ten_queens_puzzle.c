/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:32:14 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/30 13:56:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char *soluce)
{
	while (*soluce)
	{
		write(1, soluce, 1);
		soluce++;
	}
	write(1, "\n", 1);
}

int	is_valide(int position, char *soluce)
{
	int	i;

	i = 0;
	while (i < position)
	{
		if (soluce[i] == soluce[position])
			return (0);
		if (soluce[i] == soluce[position] + (position - i))
			return (0);
		if (soluce[i] == soluce[position] - (position - i))
			return (0);
		i++;
	}
	return (1);
}

void	next(int position, char *soluce, int *nbr_soluce)
{
	soluce[position] = '0';
	while (soluce[position] <= '9')
	{
		if (is_valide(position, soluce))
		{
			if (position < 9)
				next(position + 1, soluce, nbr_soluce);
			else
			{
				*nbr_soluce = *nbr_soluce + 1;
				put(soluce);
			}
		}
		soluce[position]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		nbr_soluce;
	char	soluce[11];
	int		position;

	position = 0;
	while (position < 10)
	{
		soluce[position] = '0';
		position++;
	}
	soluce[10] = '\0';
	nbr_soluce = 0;
	position = 0;
	next(position, soluce, &nbr_soluce);
	return (nbr_soluce);
}
