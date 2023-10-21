CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = rush02
MY_SOURCES = parsing.c \
			main.c \
			putnbr_in_letter.c \
			letters_count.c \
			lines_count.c \
			numbers.dict \
			ft_string.c		
			ft_string.h
			lines_count.h \
			parsing_steph.c \
			putnbr_in_letter.h \
 			putnbr_in_letter_2.c \
			putnbr_in_letter_2.h \
			struct.h  
	
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
