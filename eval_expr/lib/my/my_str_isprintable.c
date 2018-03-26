/*
** EPITECH PROJECT, 2018
** CPoolDAy06
** File description:
** isprintable
*/

int	my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < ' ')
			return (0);
		i++;
	}
	return (1);
}
