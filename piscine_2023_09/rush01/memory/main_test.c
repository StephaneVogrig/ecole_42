/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:36 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/30 21:11:42 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_soluce(int soluce[4][4]);
int		find_soluce(int **view, int **soluce);

int	main(void)
{
	int	view[4][4] = {{4,3,2,1},{1,2,2,2},{4,3,2,1},{1,2,2,2}};
	int soluce[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	find_soluce(view, soluce);
	put_soluce(soluce);
	return (0);
}
