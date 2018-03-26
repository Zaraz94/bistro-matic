/*
** EPITECH PROJECT, 2018
** CPool-Day06-2017
** File description:
** strstr
*/

char	*my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	char *ret = 0;

	while (to_find[j] != '\0' && str[i] != '\0') {
		if (to_find[j] == str[i])
			j++;
		else if (to_find[0] == str[i])
			j = 1;
		i++;
	}
	if (to_find[j] == '\0')
		return (ret = str + i - j);
	return (ret);
}
