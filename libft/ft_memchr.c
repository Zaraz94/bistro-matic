/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 04:47:49 by kitrosse          #+#    #+#             */
/*   Updated: 2016/12/23 04:47:52 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	target;

	i = 0;
	str = (unsigned char*)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == target)
			return (str[i]);
		i++;
	}
	return (NULL);
}
