/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:58:48 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/24 15:53:30 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*strx;
	char	*stry;

	if (argc == 1)
	{
		rush(5, 3);
		rush(5, 1);
		rush(1, 1);
		rush(1, 5);
		rush(4, 4);
		return (1);
	}
	if (argc != 3)
	{
		ft_putstr("I need two arguments to work...\n");
		ft_putstr("Are you sure to be at 42?");
		return (2);
	}
	strx = argv[1];
	stry = argv[2];
	ft_putstr(strx);
	ft_putchar('\n');
	ft_putstr(stry);
	return (0);
}
