/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** infix_to_postfix conversion using a stack
*/

#include <stdlib.h>
#include "my.h"
#include "mystack.h"

int	empile(int src, stack_t **);
int	pop(stack_t **);
int	top(stack_t *);
int	dumb_number(char **str);
int	is_empty(stack_t *);
int	is_op(char);
int	operator_cmp(char op1, char op2);

void	number_infixeval(char **str, char **result)
{
	while (**str >= '0' && **str <= '9') {
		**result = **str;
		(*str)++;
		(*result)++;
	}
	**result = ' ';
	(*result)++;
}

void	operator_infixeval(char op, stack_t **stack, char **result)
{
	char stack_op;

	if (is_empty(*stack))
		empile(op, stack);
	else {
		stack_op = top(*stack);
		if (operator_cmp(op, stack_op) == 1)
			empile(op, stack);
		if (operator_cmp(op, stack_op) <= 0) {
			stack_op = pop(stack);
			empile(op, stack);
			**result = stack_op;
			(*result)++;
			**result = ' ';
			(*result)++;
		}
	}
}

void	closing_par_pop(stack_t **stack, char **result)
{
	while (top(*stack) != '(') {
		**result = pop(stack);
		(*result)++;
		**result = ' ';
		(*result)++;
	}
	pop(stack);
}

void	finish_empty_stack(char **result, stack_t **stack)
{
	while (is_empty(*stack) == 0) {
		**result = pop(stack);
		(*result)++;
		**result = ' ';
		(*result)++;
	}
	**result = '\0';
}

char	*infix_to_postfix(char *str)
{
	stack_t *stack = NULL;
	char *result = malloc(sizeof(char) * my_strlen(str) * 2);
	char *result_begin_pointer = result;

	while (*str != '\0') {
		if (*str >= '0' && *str <= '9')
			number_infixeval(&str, &result);
		if (*str == '('){
			empile(*(str++), &stack);
		}
		if (*str == ')') {
			closing_par_pop(&stack, &result);
			str++;
		}
		if (is_op(*str))
			operator_infixeval(*(str++), &stack, &result);
		if (*str == ' ')
			str++;
	}
	finish_empty_stack(&result, &stack);
	return (result_begin_pointer);
}
