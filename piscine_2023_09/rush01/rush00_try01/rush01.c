/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:38:42 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/24 17:39:31 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int nb_char, char first_char, char mid_char, char last_char)
{
	int	i;

	i = 1;
	while (i <= nb_char)
	{
		if (i == 1)
			ft_putchar(first_char);
		else if (i == nb_char)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		i++;
	}
}	

void	rush(int x, int y)
{
	int	line;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	while (line <= y)
	{
		if (line == 1)
			print_line(x, '/', '*', '\\');
		else if (line == y)
			print_line(x, '\\', '*', '/');
		else
			print_line(x, '*', ' ', '*');
		line++;
		ft_putchar('\n');
	}
}
