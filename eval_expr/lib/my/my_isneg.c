/*
** EPITECH PROJECT, 2018
** B-CPE-100_Day03
** File description:
** my_isneg(int n) writes N if n < 0 or P is n >= 0
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
	if (n < 0) {
		my_putchar('N');
	} else {
		my_putchar('P');
	}
	return (0);
}
