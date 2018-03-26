/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** stack header
*/

#ifndef MYSTACK_H_
#define MYSTACK_H_
typedef struct stack
{
	int *data;
	struct stack *next;
} stack_t;
#endif
