##
## EPITECH PROJECT, 2018
## evalexpr
## File description:
## Makefile for evalexpr
##

SRC	=	main.c			\
		eval.c			\
		dumb_number.c		\
		dumb_doop.c		\
		eval_postfix.c		\
		infix_to_postfix.c	\
		stack_op.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

LIB	=	./lib/my/libmy.a

LIBFLAG	=	-Iinclude -Llib/my -lmy

WAR	=	-W -Wall

CFLAGS	=	$(WAR) $(LIBFLAG) $(INCLUDE)

all:	$(LIB) $(NAME) 
	gcc $(OBJ) -o $(NAME) $(LIBFLAG)

$(NAME):	$(OBJ)

$(LIB):
	make -C ./lib/my

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
