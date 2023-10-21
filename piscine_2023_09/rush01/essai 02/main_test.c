/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:36 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/01 19:37:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "checking.c"
#include "find_soluce.c"
#include "int_array.c"
#include "put_soluce.c"

int	main(void)
{
	int	view[4][4] = {{4,3,2,1},{1,2,2,2},{4,3,2,1},{1,2,2,2}};
	int soluce[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	if(!find_soluce(view, soluce))
		write(1, "Error\n", 6);
	
	write(1, "\n", 1);
	
	int	view2[4][4] = {{2,2,1,3},{2,2,3,1},{3,1,2,2},{2,3,2,1}};
	// 1 3 4 2 / 4 2 3 1 / 2 4 1 3 / 3 1 2 4
	
	if(!find_soluce(view2, soluce))
		write(1, "Error\n", 6);
		
	return (0);
}
