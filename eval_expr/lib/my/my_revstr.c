/*
** EPITECH PROJECT, 2018
** CPool-day06-2017
** File description:
** reverse string
*/

#include <stdio.h>

int	my_strlen(char const *);

char	*my_revstr(char *str)
{
	int size = my_strlen(str);
	char stock;

	for (int i = 0; i < size / 2; i++) {
		stock = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = stock;
	}
	return (str);
}
