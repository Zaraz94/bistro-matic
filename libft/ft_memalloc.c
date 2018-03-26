/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 10:49:31 by kitrosse          #+#    #+#             */
/*   Updated: 2017/01/17 10:49:32 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	if ((memory = (void*)malloc(sizeof(unsigned char) * size)) == NULL)
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
