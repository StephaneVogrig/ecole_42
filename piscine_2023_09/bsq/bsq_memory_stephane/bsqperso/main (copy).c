/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 02:31:28 by svogrig           #+#    #+#             */
/*   Updated: 2023/10/10 02:41:03 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_string.h"
#include <stdio.h>

void	ft_putnbr(int nb);
int	ft_atoi(char *str);

int	run_bsq(char *filename);

int main(int argc, char **argv)
{
	if(argc == 1)
		write(1, "desole\n", 7);
	else
	{
		while (argc > 1)
		{
			run_bsq(argv[argc - 1]);
			argc--;
		}
	}
}

int	min(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	if (b < c)	
		return (b);
	return (c);
}

int	run_bsq(char *filename)
{
	int		i;
	int		fd;
	char	buffer[1];
	
	buffer[0] = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("fichier non trouve\n");
		return(-1);
	}
	i = 0;
	
	//ft_putstr("start first read\n");
	while (read(fd, buffer, 1))
	{
		if (buffer[0] == '\n')
			break;
		i++;
	}
	close(fd);
	//ft_putstr("end first read\n");
	
	ft_putstr("longueur ligne 1 = ");
	ft_putnbr(i);
	ft_putstr("\n");
	
	char *line1;
	int	ok;
	
	line1 = malloc(i + 1);
	if (line1 == 0)
		return (0);
	line1[i] = '\0';
	ft_putstr("start second read\n");
	fd = open(filename, O_RDONLY);
	ok = read(fd, line1, i + 1);
	if (ok == -1)
		return (0);
		
	ft_putstr("end read line 1\n");
	//printf("%s", line1);
	
	if (line1[i - 1] == line1[i - 2] || line1[i-1] == line1[i - 3] || line1[i - 2] == line1[i - 3])
	{
		ft_putstr("map error\n");
		return (0);	
	}
	char empty = line1[i - 3];
	char obstacle = line1[i - 2];
	char soluce = line1[i - 1];
	
	write (1, &empty, 1);
	write (1, &obstacle, 1);
	write (1, &soluce, 1);
	line1[i - 3] = '\0';
	ft_putstr(line1);
	ft_putstr("\n");
	
	int size_line;
	size_line = ft_atoi(line1);
	ft_putnbr(size_line);
	ft_putstr("\n");
	
	int  size_map;
	char *map;
	size_map = 1 + size_line * (size_line + 1);
	
	ft_putstr("Taille calculee ");
	ft_putnbr(size_map);
	
	map = malloc(size_map);
	if (map == 0)
		return (0);
	ok = read(fd, map, size_map);
	map[size_map] = '\0';
	
	ft_putstr("\nTaille recut ");
	ft_putnbr(ok);
	if (ok != size_map - 1)
		return (0); //erreur de map
	ft_putstr("\nend malloc\n");
	ft_putstr(map);
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	ft_putstr("start algo\n");
	int	*temp0;
	int	*temp1;
	temp0 = malloc(size_line);
	temp1 = malloc(size_line);
	i = 0;
	while (i < size_line)
	{
		temp0[i] = 0;
		temp1[i] = 0;
		i++;
	}
	
			//write(1, &map[0], 1);
	int x;
	int	y;
	int size;
	int	l;
	
	x = 0;
	y = 0;
	size = 0;
	
	int *tempswap;
	int	j;
	l = 0;
	i = 0;
	ft_putstr("debut map calcul\n");
	//while (i < size_map - 1)
	while (map[i] != 0)
	{
		if (map[i] == '\n')
		{
			ft_putstr("\n");
			tempswap = temp0;
			temp0 = temp1;
			temp1 = tempswap;
			l++;
			j = 0;
		}
		else if (map[i] == empty)
		{
			if (j == 0 || l == 0)
				temp1[j] = 1;
			else
			{
				temp1[j] = min(temp0[j - 1], temp0[j], temp1[j - 1]);
				temp1[j]++;
			}
			if (temp1[j] > size)
			{
				x = j;
				y = l;
				size = temp1[j];
			}
			ft_putnbr(temp1[j]);
			write(1, " ", 1);
			j++;
		}
		else if (map[i] == obstacle)
		{
			temp1[j] = 0;
			//ft_putnbr(temp1[j]);
			ft_putstr("X");
			write(1, " ", 1);
			j++;
		}
		else
		{
			ft_putstr("error map");
			return (-1);
		}	
		i++;	
	}
	ft_putstr("\nend map calcul\n");
	/*
	ft_putstr("\n x = ");
	ft_putnbr(x);
	ft_putstr(", y = ");
	ft_putnbr(y);
	ft_putstr(", size = ");
	ft_putnbr(size);
	ft_putstr("\n");
	*/
	int xmin = x - size ;
	int ymin = y - size ;
	/*
	ft_putstr("\n x = ");
	ft_putnbr(xmin);
	ft_putstr(", y = ");
	ft_putnbr(ymin);
	ft_putstr(", size = ");
	ft_putnbr(size);
	ft_putstr("\n");
	*/
	//print solution
	i = 0;
	l = 0;
	while (i < size_map - 1)
	{
		if (map[i] == '\n')
		{
			write(1, "\n", 1);
			l++;
			j = 0;
		}
		else if (map[i] == empty)
		{
			if (j > xmin && j <= x && l > ymin && l <= y)
				write(1, &soluce, 1);
			else
				write(1, &empty, 1);
			j++;
		}
		else if (map[i] == obstacle)
		{
			write(1, &obstacle, 1);
			j++;
		}
		i++;
	}
	free(temp0);
	free(temp1);
	free(map);
	free(line1);
	return (0);
}

