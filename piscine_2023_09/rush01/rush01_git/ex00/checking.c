/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:08:42 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/01 18:00:13 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reverse_int_array(int *array, int size);

int	is_dobble_in_column(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	count_view(int array[4])
{
	int	nbr_view;
	int	h_current;
	int	i;

	nbr_view = 1;
	h_current = array[0];
	i = 1;
	while (i <= 3)
	{
		if (h_current < array[i])
		{
			nbr_view++;
			h_current = array[i];
		}
		i++;
	}	
	return (nbr_view);
}

int	is_valid_soluce(int soluce[4][4], int view[4][4])
{
	int	array[4];
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			array[j] = soluce[j][i];
			j++;
		}
		if (count_view(array) != view[0][i])
			return (0);
		reverse_int_array(array, 4);
		if (count_view(array) != view[1][i])
			return (0);
		if (is_dobble_in_column(array, 4))
			return (0);
		i++;
	}
	return (1);
}

int	is_valide_line(int line[4], int view[4][4], int i_line)
{
	if (count_view(line) != view[2][i_line])
		return (0);
	reverse_int_array(line, 4);
	if (count_view(line) != view[3][i_line])
		return (0);
	return (1);
}
