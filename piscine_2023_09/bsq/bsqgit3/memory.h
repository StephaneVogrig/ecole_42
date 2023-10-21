/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:23:31 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/11 18:52:56 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MEMORY_H
# define MEMORY_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_string.h"

typedef struct s_struct_map
{
	int		nb_line;
	int		nb_char;
	char	empty;
	char	obstacle;
	char	replace;
	char	**map;
	int		index_first_line;
}	t_struct_map;

typedef struct s_soluce
{
	int	x;
	int	y;
	int	size;
}	t_soluce;

typedef struct s_buffer_entry
{
	char			*buffer;
	int				pos;
	int				size;
	int				increment_size;
}	t_buffer_entry;

t_buffer_entry	*add_entry(char entry, t_buffer_entry *buffer_entry);
void			free_temp(int **temp);
void			free_map(t_struct_map *map);

#endif
