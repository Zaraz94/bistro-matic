/*
** EPITECH PROJECT, 2018
** CPool-Day03
** File description:
** displays the number given as parameter
*/

void	my_putchar(char);

int	tenth_pow(int nb)
{
	int i;
	int result = 1;

	for (i = 0; i < nb; i++)
		result *= 10;
	return (result);
}

int	get_int_size(int nb)
{
	int size = 0;

	while (nb > 0) {
		nb /= 10;
		size++;
	}
	return (size);
}

int	my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	}
	if (nb == 0) {
		my_putchar('0');
	} else {
		int size = get_int_size(nb);
		int i;
		int pow;
		int digit;
		for (i = size; i > 0; i--) {
			pow = tenth_pow(i - 1);
			digit = nb / pow;
			nb %= pow;
			my_putchar(digit + '0');
		}
	}
	return (0);
}
