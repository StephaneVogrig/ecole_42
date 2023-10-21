CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02
MY_SOURCES = parsing.c \
			main.c \
			putnbr_in_letter.c \
			letters_count.c \
			lines_count.c \
			ft_string.c	\
 			putnbr_in_letter_2.c \
			check_dictionnary.c 
	
MY_OBJECTS = $(MY_SOURCES:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME) : $(MY_OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS)

fclean : all
	rm -rf *.o

clean : 
	rm -rf *.o
