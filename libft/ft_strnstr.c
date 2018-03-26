/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 04:21:33 by kitrosse          #+#    #+#             */
/*   Updated: 2017/01/12 04:21:35 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i <= n && src[i] != '\0')
	{
		while (src[i] == dest[i])
		{
			i++;
			j++;
			if (src[i + 1] == '\0' || i == n)
				return (src);
		}
		i++;
	}
	return (NULL);
}
