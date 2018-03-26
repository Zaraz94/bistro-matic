/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 22:22:09 by kitrosse          #+#    #+#             */
/*   Updated: 2016/12/21 22:22:11 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;
	char	target;

	dst = (char*)dest;
	sc = (char*)src;
	i = 0;
	target = (char)c;
	while (i < n)
	{
		if (sc[i] == c)
			return (dst);
		dst[i] = sc[i];
	}
	return (NULL);
}
