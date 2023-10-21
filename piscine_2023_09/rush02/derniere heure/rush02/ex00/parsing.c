/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisambet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:54:21 by lisambet          #+#    #+#             */
/*   Updated: 2023/10/08 20:50:03 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "parsing.h"
#include "ft_string.h"

int	check_chars(char *str, int *cursor, char to_cmp)
{
	if (to_cmp == 1 && (str[*cursor] >= '0' && str[*cursor] <= '9'))
	{
		return (1);
	}
	else if (to_cmp == 2 && (str[*cursor] >= ' ' && str[*cursor] < 127))
	{
		return (2);
	}
	else if (str[*cursor] == to_cmp && (to_cmp == ' ' || to_cmp == '\n'))
	{
		while (str[*cursor] == to_cmp)
		{
			*cursor = *cursor + 1;
		}
		return (to_cmp);
	}
	else if (str[*cursor] == to_cmp)
	{
		*cursor = *cursor + 1;
		return (to_cmp);
	}
	else
		return (0);
}

char	*buffering(char *str, char *buf, int *cursor, int x)
{
	int	i;

	i = 0;
	while (check_chars(str, cursor, x) == x)
	{
		buf[i] = str[*cursor];
		*cursor = *cursor + 1;
		i++;
	}
	if (check_chars(str, cursor, x) != x)
		buf[i] = 0;
	return (buf);
}

int	str_to_tab(char *buf, int line, t_dict *dict, int cible)
{
	if (cible == 1)
	{
		dict[line].str_nb = malloc(sizeof (char) * (ft_strlen(buf) + 1));
		ft_strcpy(dict[line].str_nb, buf);
		return (1);
	}
	else if (cible == 2)
	{
		dict[line].str_letters = malloc(sizeof (char) * (ft_strlen(buf) + 1));
		ft_strcpy(dict[line].str_letters, buf);
		return (1);
	}
	else if (cible == 3)
	{
		dict[line].str_nb = malloc(sizeof (char) * 1);
		dict[line].str_nb[0] = 0;
		dict[line].str_letters = malloc(sizeof (char) * 1);
		dict[line].str_letters[0] = 0;
		return (1);
	}	
	else
		return (0);
}

int	str_extraction(char *str, t_dict *dict)
{
	int		cursor;
	int		line;
	char	*buf;

	buf = malloc((1 + ft_strlen(str)) * sizeof (char));
	cursor = 0;
	line = 0;
	while (str[cursor] != 0)
	{
		str_to_tab(buffering(str, buf, &cursor, 1), line, dict, 1);
		check_chars(str, &cursor, ' ');
		if (check_chars(str, &cursor, ':') != ':')
			break ;
		check_chars(str, &cursor, ' ');
		str_to_tab(buffering(str, buf, &cursor, 2), line, dict, 2);
		if (check_chars(str, &cursor, '\n') != '\n')
			break ;
		line ++;
	}
	free(buf);
	if (str[cursor] == 0 && str[cursor - 1] == '\n')
		return (str_to_tab("0", line, dict, 3));
	return (0);
}

int	parsing(t_dict *dict, char *filename)
{
	int		v_return;
	int		fd;
	int		count_char_file;
	int		total_chars;
	char	*str;

	count_char_file = letters_count(filename);
	str = malloc((sizeof (char)) * (count_char_file + 1));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		total_chars = read(fd, str, count_char_file);
		str[total_chars] = 0;
	}
	if (str_extraction(str, dict) == 0)
		v_return = 0;
	else
		v_return = 1;
	close(fd);
	free(str);
	return (v_return);
}
