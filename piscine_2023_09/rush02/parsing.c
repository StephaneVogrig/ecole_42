/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisambet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:54:21 by lisambet          #+#    #+#             */
/*   Updated: 2023/10/08 01:12:50 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "parsing.h"
#include "ft_string.h"

int	check_chars(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == ' ')
		return (2);
	else if (c == ':')
		return (3);
	else if (c == '\n')
		return (4);
}

int	buffering(char *str, int *cursor,
int cd1, int cd2, t_dict *dict, int line)
{
	int	len_str;
	int	i;
	char	*buf;
	
	i = 0;
	len_str = ft_strlen(str);
	buf = malloc((1 + len_str) * sizeof (char));
	buf[len_str] = 0;
	while (str[*cursor] >= cd1 && str[*cursor] < cd2)
	{
		buf[i] = str[*cursor];
		i++;
		*cursor = *cursor + 1;
	}
	buf[i] = 0;
	dict[line].str_nb = malloc((sizeof(char)) * (i + 1));
	ft_strcpy(dict[line].str_nb, buf);// a adapter pour .str_letters
	free(buf);
	return (0);//pas encore implementé
}

int	str_to_tab(char *str, t_dict *dict)
{
	int		cursor;
	int		line;

	cursor = 0;
	line = 0;
	while (str[cursor] != 0)
	{
		while (str[cursor] == '\n')
			cursor ++;
		buffering(&str[cursor], &cursor, '0', ':', dict, line);
//		printf("%s\n", dict[line].str_nb);
		while (str[cursor] == ' ')
			cursor ++;
		if (str[cursor] == ':')
			cursor ++;
		else
			break ;
		while (str[cursor] == ' ')
			cursor ++;
		//buffering(str, &cursor, ' ', 127, dict[line].str_letters);
		if (str[cursor] == '\n')
			cursor ++;
		else
			break ;
		line ++;
	}
	if (str[cursor] == 0)
		return (1);
	else
		return (0);
}

int	parsing(t_dict *dict, char *filename)
{
	int		v_return;
	int		file_descr;
	int		count_char_file;
	int		nb_of_char_read;
	char	*str;

	count_char_file = letters_count(filename);
	str = malloc((sizeof (char)) * (count_char_file + 1));
	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
		return (0);
	else
	{
		nb_of_char_read = read(file_descr, str, count_char_file);
		str[nb_of_char_read] = 0;
		if (str_to_tab(str, dict) == 0)
			v_return = 0;
		else
			v_return = 1;
		close(file_descr);
	}
	free(str);
	return (v_return);
}
