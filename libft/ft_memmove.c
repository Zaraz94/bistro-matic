/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 00:49:42 by kitrosse          #+#    #+#             */
/*   Updated: 2016/12/23 00:49:44 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sc;

	i = 0;
	dst = (char*)dest;
	sc = (char*)src;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}
