/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nledent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:07:52 by nledent           #+#    #+#             */
/*   Updated: 2023/10/07 23:55:20 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

typedef struct s_tab
{
	char	*str_nb;
	char	*str_letters;
}		t_dict;
int	str_to_tab(char *str, t_dict *dict);
int	letters_count(char *filename);
int	lines_count(char *filename);
int	parsing(t_dict *dict, char *filename);

#endif
