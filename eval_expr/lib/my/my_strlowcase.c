/*
** EPITECH PROJECT, 2018
** CPoolDay06-2017
** File description:
** strlowcase
*/

char	*my_strlowcase(char *str)
{
	int i;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
