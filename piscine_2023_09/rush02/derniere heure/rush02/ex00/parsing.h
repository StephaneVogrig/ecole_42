/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nledent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:07:52 by nledent           #+#    #+#             */
/*   Updated: 2023/10/08 14:44:37 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H
# include "struct.h"

char	*buffering(char *str, char *buf, int *cursor, int x);
int		str_to_tab(char *buf, int line, t_dict *dict, int cible);
int		check_chars(char *str, int *cursor, char to_cmp);
int		str_extraction(char *str, t_dict *dict);
int		letters_count(char *filename);
int		lines_count(char *filename);
int		parsing(t_dict *dict, char *filename);
#endif
