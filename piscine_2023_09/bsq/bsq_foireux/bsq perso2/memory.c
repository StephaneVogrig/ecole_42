/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:56:43 by mbouchet          #+#    #+#             */
/*   Updated: 2023/10/10 22:11:23 by mbouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "memory.h"

t_buffer_entry	*add_entry(char entry, t_buffer_entry *buffer_entry)
{
	char	*buffer_up;

	buffer_entry->increment_size = 10000;
	buffer_entry->buffer[buffer_entry->pos] = entry;
	buffer_entry->pos++;
	if (buffer_entry->pos == buffer_entry->size)
	{
		buffer_up = malloc(buffer_entry->size + buffer_entry->increment_size);
		if (buffer_up == 0)
		{
			ft_putstr("defaut alloc buffer_up de buffer_entry\n");
			return (0);
		}
		ft_strcpy(buffer_up, buffer_entry->buffer);
		free(buffer_entry->buffer);
		buffer_entry->buffer = buffer_up;
		buffer_entry->size += buffer_entry->increment_size;
	}
	return (buffer_entry);
}
/*
t_buffer_entry	*new_entry(int buffer_size)
{
	t_buffer_entry	*buffer_entry;

	buffer_entry = malloc(sizeof(t_buffer_entry));
	if (buffer_entry == 0)
		return (-1);
	return (0);
}*/
