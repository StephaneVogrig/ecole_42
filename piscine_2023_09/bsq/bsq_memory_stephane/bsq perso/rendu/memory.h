/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:23:31 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/10 00:25:32 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MEMORY_H
# define MEMORY_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // TO REMOVE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

char	*ft_add(char *str, char c);

typedef struct s_struct_map
{
	int		size;
	char	empty;
	char	obstacle;
	char	replace;
	char	*map;
}	t_struct_map;

#endif
