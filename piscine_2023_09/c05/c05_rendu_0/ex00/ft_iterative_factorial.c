/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:05:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/02 00:21:13 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb <= 0)
		return (1);
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
