/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:06 by qdeviann          #+#    #+#             */
/*   Updated: 2023/10/01 12:21:39 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		*format_to_view(char **argv, int view[4][4]);
int		check_format(char **argv);
int		find_soluce(int view[4][4], int soluce[4][4]);
int		put_soluce(int soluce[4][4]);
void	put_error(void);

int	main(int argc, char **argv)
{
	int	view[4][4];
	int	soluce[4][4];

	if (argc == 2)
	{
		if (check_format(argv))
		{
			format_to_view(argv, view);
			find_soluce(view, soluce);
			put_soluce(soluce);
		}
	}
	else
	{
		put_error();
	}
	return (0);
}
