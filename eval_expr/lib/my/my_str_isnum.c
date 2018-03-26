/*
** EPITECH PROJECT, 2018
** CPoolDay06
** File description:
** isnum
*/

int	my_str_isnum(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > '9' || str[i] > '0')
			return (0);
		i++;
	}
	return (1);
}

