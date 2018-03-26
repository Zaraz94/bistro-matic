/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 06:37:01 by kitrosse          #+#    #+#             */
/*   Updated: 2017/02/01 06:37:03 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		nb_digit;
	int		nb;
	int		neg;

	nb_digit = 1;
	neg = (n < 0) ? 1 : 0;
	n *= (n > 0) ? -1 : 1;
	nb = n;
	while ((nb /= 10) < 0)
		nb_digit++;
	if ((str = (char *)malloc((sizeof(char) * nb_digit) + neg + 1)) == NULL)
		return (NULL);
	ft_bzero(str, nb_digit + neg + 1);
	str[0] = '-';
	nb_digit -= 1 - neg;
	while (nb_digit-- >= neg)
	{
		str[nb_digit + 1] = (-(n % 10) + 48);
		n /= 10;
	}
	return (str);
}
