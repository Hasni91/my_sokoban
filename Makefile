##
## EPITECH PROJECT, 2018
## 
## File description:
## Makefile
##

CC	=	gcc

SRC	=	my_sokoban.c\
		col.c\
		lin.c\
		open_file.c\
		create.c\
		my_putstr.c\
		my_putchar.c\
		searchP.c\
		mvmt.c\
		right.c\
		left.c\
		down.c\
		up.c\
		bs.c\
		my.h

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban


all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lncurses

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
