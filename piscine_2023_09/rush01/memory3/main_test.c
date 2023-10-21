/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:46:36 by svogrig           #+#    #+#             */
/*   Updated: 2023/09/30 22:31:45 by svogrig          ###   ########.fr       */
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
	
	find_soluce(view, soluce);
	put_soluce(soluce);
	return (0);
	
}
