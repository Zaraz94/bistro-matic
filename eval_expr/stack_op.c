/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** stack operations
*/

#include <stdlib.h>
#include "mystack.h"
#include "my.h"

int	is_empty(stack_t *stack)
{
	if (stack == NULL)
		return (1);
	return (0);
}

int	empile(int src, stack_t **stack)
{
	stack_t *head = malloc(sizeof(stack_t));

	if (head == NULL)
		return (1);
	head->data = malloc(sizeof(int));
	if (head->data == NULL)
		return (1);
	*(head->data) = src;
	head->next = *stack;
	*stack = head;
	return (0);
}

int	pop(stack_t **stack)
{
	if (is_empty(*stack))
		return (0);
	stack_t *next;
	int result = *((*stack)->data);

	free((*stack)->data);
	next = (*stack)->next;
	free(*stack);
	*stack = next;
	return (result);
}

int	top(stack_t *stack)
{
	return (*(stack->data));
}

void	display_stack_char(stack_t *stack)
{
	my_putstr("displaying a stack : ");
	while (stack != NULL) {
		my_putchar(*(stack->data));
		stack = stack->next;
	}
	my_putchar('\n');
}
