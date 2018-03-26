/*
** EPITECH PROJECT, 2018
** CPoolDay05-2017
** File description:
** isprime
*/

int	sub_is_prime(int nb, int div)
{
	if (div == 1)
		return 1;
	else if (nb % div == 0)
		return 0;
	else
		return sub_is_prime(nb, div - 1);
}

int	my_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else
		return (sub_is_prime(nb, nb / 2));
}
