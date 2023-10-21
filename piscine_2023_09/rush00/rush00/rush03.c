/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:48:17 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/24 17:50:18 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int line_len, char *str)
{
	int	i;

	i = 1;
	while (i <= line_len)
	{
		if (i == 1)
			ft_putchar(str[0]);
		else if (i != line_len)
			ft_putchar(str[1]);
		else
			ft_putchar(str[2]);
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
		if (line == 1 || line == y)
			print_line(x, "ABC");
		else
			print_line(x, "B B");
		line++;
		ft_putchar('\n');
	}
}
