##
## EPITECH PROJECT, 2024
## B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
## File description:
## Makefile
##

NAME	=	my_sokoban

SRC 	=	$(wildcard main_func/*.c)
SRC += $(wildcard func/*.c)

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/
LDFLAGS	=	-lncurses

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f main_func/*#
		rm -f include/*#
		rm -f *~
		rm -f main_func/*~
		rm -f include/*~

re	:	fclean all
