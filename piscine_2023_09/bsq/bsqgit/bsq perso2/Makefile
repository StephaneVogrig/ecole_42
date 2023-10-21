# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 22:13:30 by mbouchet          #+#    #+#              #
#    Updated: 2023/10/10 22:27:25 by mbouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = bsq
SRCS = main.c ft_string.c memory.c map_init.c show_map.c ft_math.c map_solve.c
INCLUDES = ft_string.h memory.h map_init.h show_map.h ft_math.h map_solve.h
OBJS = $(SRCS:.c=.o)
RM = rm -f

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES)

all : $(NAME)

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all
