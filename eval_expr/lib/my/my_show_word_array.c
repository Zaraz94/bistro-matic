/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** show word array
*/

#include <stdlib.h>

int	my_putstr(char const *);
char	*my_strcat(char *, char const *);

int	get_size_tab(char * const *tab)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (tab[i] != NULL) {
		while (tab[i][j] != '\0') {
			count++;
			j++;
		}
		j = 0;
		count++;
		i++;
	}
	return count;
}

int	my_show_word_array(char * const *tab)
{
	int i = 0;
	char *concatenated = malloc(get_size_tab(tab) + 1);

	while (tab[i] != NULL) {
		concatenated = my_strcat(concatenated, tab[i]);
		concatenated = my_strcat(concatenated, "\n");
		i++;
	}
	my_putstr(my_strcat(concatenated, "\0"));
	return (0);
}
