/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** strcat
*/

char	*my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0') {
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
