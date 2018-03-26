/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** stack operations
*/

#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

int	empile(int, stack_t **);
int	pop(stack_t **);
int	top(stack_t *);
int	dumb_number(char **);
int	do_op(char op, int a, int b);
int	is_empty(stack_t *);
int	is_op(char );
int	my_put_nbr(int);
void	display_stack_int(stack_t *);

int	post_parsed_expr(char **str)
{
	stack_t *stack = NULL;
	int nb1 = 0;
	int nb2 = 0;
	int res;
	char op;

	while (**str != '\0') {
		if (is_op(**str) == 0 && (**str) != ' ') {
			empile(dumb_number(str), &stack);
		} else if (is_op(**str) == 1 && is_empty(stack) == 0) {
			op = **str;
			nb1 = pop(&stack);
			nb2 = pop(&stack);
			res = do_op(op, nb2, nb1);
			empile(res, &stack);
		}
		(*str)++;
	}
	return (res);
}
