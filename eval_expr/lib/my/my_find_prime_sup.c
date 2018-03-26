/*
** EPITECH PROJECT, 2018
** CPoolDay04-2017
** File description:
** find superior or equal prime number
*/

int	my_is_prime(int nb);

int	my_find_prime_sup(int nb)
{
	while (!my_is_prime(nb))
		nb++;
	return nb;
}
