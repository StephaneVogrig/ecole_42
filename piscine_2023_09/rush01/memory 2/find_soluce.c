/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_soluce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:40:25 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/01 03:02:37 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valide_possible_line(int array[4], int position);
int		is_valide_line(int line[4], int view[4][4], int i_line);
int		is_valid_soluce(int soluce[4][4], int view[4][4]);
void	copy_int_array(int *src, int *dest, int size);

void	find_line(int posble_line[24][4], int *current_l, int work_l[4], int p)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		work_l[p] = i;
		if (is_valide_possible_line(work_l, p))
		{
			if (p == 3)
			{
				copy_int_array(work_l, posble_line[*current_l], 4);
				*current_l = *current_l + 1;
			}
		}
		else
			find_line(posble_line, current_l, work_l, p + 1);
		i++;
	}
}

int	try(int soluce[4][4], int view[4][4], int possible_line[24][4], int depth)
{
	int	i;
	int	soluce_is_find;

	i = 0;
	soluce_is_find = 0;
	while (i < 24)
	{
		if (is_valide_line(possible_line[i], view, depth))
		{
			copy_int_array(possible_line[i], soluce[depth], 4);
			if (depth < 3)
				soluce_is_find = try(soluce, view, possible_line, depth + 1);
			else
				soluce_is_find = is_valid_soluce(soluce, view);
			if (soluce_is_find)
				return (1);
		}
		i++;
	}
	return (0);
}

void	gen_possible_line(int possible_line[24][4])
{
	int	current_line;
	int	*current_l;
	int	work_l[4];

	current_l = &current_line;
	find_line(possible_line, current_l, work_l, 0);
}

int	find_soluce(int view[4][4], int soluce[4][4])
{
	int	possible_line[24][4];

	gen_possible_line(possible_line);
	return (try(soluce, view, possible_line, 0));
}
