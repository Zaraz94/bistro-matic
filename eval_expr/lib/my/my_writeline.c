/*
** EPITECH PROJECT, 2018
** CPool-Day12
** File description:
** writes the given string until a \n or \0
*/

#include <stdio.h>

void	my_putchar(char);

int	my_writeline(char const *str)
{
	int i = 0;
	while (str[i] != '\n' || str[i] != '\0' || str[i] != EOF) {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
