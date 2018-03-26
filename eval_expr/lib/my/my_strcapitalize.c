/*
** EPITECH PROJECT, 2018
** CPoolDay06-2017
** File description:
** capitalize
*/

char	*my_strcapitalize(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0') {
		if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str [i + 1] -= 32;
		i++;
	}
	return (str);
}
