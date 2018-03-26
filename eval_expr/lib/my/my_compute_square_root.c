/*
** EPITECH PROJECT, 2018
** CPoolDay05-2017
** File description:
** squareroot
*/

int	sub_square(int nb, int result)
{
	if (result * result == nb)
		return (result);
	else if (result == 1)
		return (0);
	else
		return (sub_square(nb, result - 1));
}

int	my_compute_square_root(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (sub_square(nb, nb / 2));
}
