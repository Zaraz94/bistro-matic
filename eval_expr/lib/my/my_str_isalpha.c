/*
** EPITECH PROJECT, 2018
** CPoolDay06-2017
** File description:
** str_isalpha
*/

int	my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
