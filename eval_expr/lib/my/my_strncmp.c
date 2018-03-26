/*
** EPITECH PROJECT, 2018
** CPool-Day06-2017
** File description:
** strncmp
*/

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
