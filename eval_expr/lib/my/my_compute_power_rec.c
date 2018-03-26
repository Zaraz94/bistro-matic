/*
** EPITECH PROJECT, 2018
** CPoolDay05-2017
** File description:
** powREC
*/

int	sub_pow(int nb, int p, int result)
{
	if (p == 0)
		return (result);
	else
		return (sub_pow(nb, p - 1, result * nb));
}

int	my_compute_power_rec(int nb, int p)
{
	if (p < 0)
		return (0);
	else
		return (sub_pow(nb, p, 1));
}
