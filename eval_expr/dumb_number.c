/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** dumbnumber
*/

int	dumb_number(char **str)
{
	int result = 0;

	while (**str >= '0' && **str <= '9') {
		result = result * 10 + **str - '0';
		(*str)++;
	}
	return (result);
}
