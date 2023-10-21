/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:07:52 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/11 18:42:28 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int **tab)
{
	int	*tmp;

	tmp = tab[1];
	tab[1] = tab[0];
	tab[0] = tmp;
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}
