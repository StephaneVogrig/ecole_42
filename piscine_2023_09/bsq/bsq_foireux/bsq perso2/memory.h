/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:23:31 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/10 22:05:59 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MEMORY_H
# define MEMORY_H

# include <stdlib.h>
# include <unistd.h>
#include "ft_string.h"

typedef struct s_struct_map
{
	int		size;
	char	empty;
	char	obstacle;
	char	replace;
	char	**map;
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

#endif
