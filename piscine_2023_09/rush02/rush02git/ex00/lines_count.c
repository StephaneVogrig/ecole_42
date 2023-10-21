/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisambet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:07:40 by lisambet          #+#    #+#             */
/*   Updated: 2023/10/07 19:37:02 by nledent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

int	lines_count(char *filename)
{
	int		i;
	int		fd;
	char	buffer[1];

	i = 0;
	buffer[0] = '\0';
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		while (read(fd, buffer, 1))
		{
			if (buffer[0] == '\n')
				i++;
		}
	}
	close(fd);
	return (i);
}
