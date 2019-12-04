##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## godeffroy.roue
##

SRC_DIR=	$(realpath ./src)

SRC=		$(SRC_DIR)/my_sokoban.c		\
		$(SRC_DIR)/main.c		\
		$(SRC_DIR)/my_getnbr.c		\
		$(SRC_DIR)/my_print1.c		\
		$(SRC_DIR)/my_print2.c		\
		$(SRC_DIR)/my_printf.c		\
		$(SRC_DIR)/my_put_hexa.c	\
		$(SRC_DIR)/my_put_nbr_ui.c	\
		$(SRC_DIR)/my_put_nbr.c		\
		$(SRC_DIR)/my_putchar.c		\
		$(SRC_DIR)/my_putstr.c		\
		$(SRC_DIR)/my_strcat.c		\
		$(SRC_DIR)/my_strcmp.c		\
		$(SRC_DIR)/my_strlen.c		\
		$(SRC_DIR)/sokoban_alg.c	\
		$(SRC_DIR)/play_game.c		\
		$(SRC_DIR)/manage_key.c		\
		$(SRC_DIR)/manage_key2.c	\
		$(SRC_DIR)/find.c		\
		$(SRC_DIR)/sokoban_p.c

OBJ=		$(SRC:.c=.o)

NAME=		my_sokoban

CFLAGS=		-Wall -Wextra -Werror
CFLAGS=		-Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -lncurses -o $(NAME)	$(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f libmy.a


re:	fclean	all

debug:		$(OBJ)
		gcc -o $(NAME)	$(OBJ) -g
