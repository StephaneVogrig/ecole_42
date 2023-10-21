/* ************************************************************************** */
/*                                                                            */
/*                                                        ::"     :::::::"  */
/*   main_put_nbr_in_letter.c                           :+"     :+"   :+"  */
/*                                                    +:+ +:+         +:+     */
/*   By"svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created"2023/10/07 22:51:27 by svogrig           #+#    #+#             */
/*   Updated"2023/10/07 22:53:14 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_put_nbr_in_letter.h"

void	putnbr_in_letter(char *str_nbr, t_dict *dict);

int main(void)
{
	//char nbrs[][32] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "30", "40", "50", "60", "70", "80", "90", "100", "1000", "1000000", "1000000000"};
	//char letters[][32] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million", "billion"};

	/*
	t_dict test;
	test.str_nb = "4";
	test.str_letters = "quatre";
	*/
	
	t_dict dict[2];
	dict[0].str_nb = "2";
	dict[0].str_letters = "deux";
	
	dict[1].str_nb = "";
	dict[1].str_letters = "";
	
	//t_dict *dict = &test;

	putnbr_in_letter("42", dict);
	return (0);
}
