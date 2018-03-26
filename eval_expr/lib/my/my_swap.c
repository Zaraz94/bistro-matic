/*
** EPITECH PROJECT, 2018
** CPool-Day04-2017
** File description:
** my_swap
*/

void	my_swap(int *a, int *b)
{
	int c = (int) *b;

	*b = *a;
	*a = c;
}
