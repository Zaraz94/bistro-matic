/*
** EPITECH PROJECT, 2018
** CPool-day04-2017
** File description:
** getnbr
*/

#include<limits.h>

int	strlen_nbr(const char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

char	*get_remove_sign(char const *str, int *sign)
{
	int s = 1;

	while (str[0] == '-' || str[0] == '+') {
		if (str[0] == '-') {
			s *= -1;
		}
		str++;
	}
	*sign = s;
	return ((char *) str);
}

int	my_getnbr(char const *str)
{
	int size;
	long result = 0;
	int sign = 1;
	int i;

	str = get_remove_sign(str, &sign);
	size = strlen_nbr(str);
	if (size > 11 || size == 0)
		return (0);
	for (i = 0; i < size; i++)
		result = result * 10 + str[i] - '0';
	result *= sign;
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	return ((int) result);
}
