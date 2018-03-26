/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:30:19 by kitrosse          #+#    #+#             */
/*   Updated: 2016/12/08 19:32:10 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	target;

	str = (char*)s;
	i = 0;
	target = (char)c;
	while (i < n)
	{
		str[i] = target;
		i++;
	}
	return (str);
}
