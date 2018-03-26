/*
** EPITECH PROJECT, 2018
** CPool-Day06-2017
** File description:
** strupcase
*/

#include <stdio.h>

char	*my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
