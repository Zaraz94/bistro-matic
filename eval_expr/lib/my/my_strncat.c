/*
** EPITECH PROJECT, 2018
** CPoolDay06
** File description:
** strncat
*/

char	*my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	for (int j = 0; src[j] != '\0' && j < nb; j++)
		dest[i + j] = src[j];
	return (dest);
}
