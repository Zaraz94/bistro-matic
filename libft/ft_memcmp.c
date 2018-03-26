/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 05:48:54 by kitrosse          #+#    #+#             */
/*   Updated: 2016/12/23 05:48:55 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char*)s1;
	str2 = (char*)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (*str1 - *str2);
		i++;
	}
	return (0);
}
