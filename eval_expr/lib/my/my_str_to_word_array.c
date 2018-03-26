/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** str_to_word_array
*/

#include <stdlib.h>

char	*my_strcat(char *, char const *);

int	is_alphanumeric(char c)
{
	return ((c > '0' && c < '9') || (c > 'A' && c < 'z'));
}

char	**set_array(char const *str)
{
	int array_size = 0;
	int word_size = 0;
	char **arr;
	int i;

	for (i = 0; str[i]; i++) {
		if (is_alphanumeric(str[i]))
			word_size++;
		else if (word_size > 0) {
			array_size++;
			word_size = 0;
		}
	}
	if (word_size > 0)
		array_size++;
	arr = malloc(sizeof(char *) * array_size);
	return (arr);
}

char	*get_word(char const *str, int start, int size)
{
	char *word = malloc(size + 1);
	int i;

	for (i = 0; i < size; i++)
		word[i] = str[start + i];
	word[i] = '\0';
	return (word);
}

char	**my_str_to_word_array(char const *str)
{
	int i;
	int wsize = 0;
	int arrcursor = 0;
	char **arr = set_array(str);

	for (i = 0; str[i]; i++) {
		if (is_alphanumeric(str[i]))
			wsize++;
		else if (wsize > 0) {
			arr[arrcursor] = get_word(str, i - wsize, wsize);
			arrcursor++;
			wsize = 0;
		}
	}
	if (wsize > 0) {
		arr[arrcursor] = get_word(str, i - wsize, wsize);
		arrcursor++;
	}
	arr[arrcursor] = NULL;
	return (arr);
}
