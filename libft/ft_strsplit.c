/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitrosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 07:09:40 by kitrosse          #+#    #+#             */
/*   Updated: 2017/02/01 07:09:41 by kitrosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_char_is_separator(char c, char separator)
{
	if (c == separator)
		return (1);
	return (0);
}

static char		*ft_cpy_words(char *dst, char *src, int start, int lenght)
{
	int		i;
	int		j;

	if ((dst = (char*)malloc(sizeof(char) * (lenght + 1))) == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (i != lenght)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

static void		ft_split_words(char **word_tab, char *s, char separator)
{
	int		word_size;
	int		i;

	word_size = 0;
	i = 0;
	while (s[i])
	{
		while (ft_char_is_separator(s[i], separator))
			i++;
		if (s[i] == '\0')
			break ;
		word_size = 0;
		while (!ft_char_is_separator(s[i], separator) && s[i])
		{
			i++;
			word_size++;
		}
		*word_tab = ft_cpy_words(*word_tab, s, i - word_size, word_size);
		word_tab++;
	}
	*word_tab = NULL;
}

static int		ft_get_nb_words(char const *s, char separator)
{
	int		nb_words;
	int		i;

	nb_words = 0;
	i = 0;
	while (s[i])
	{
		while (ft_char_is_separator(s[i], separator))
			i++;
		if (s[i] == '\0')
			return (nb_words);
		while (!ft_char_is_separator(s[i], separator) && s[i])
			i++;
		nb_words++;
	}
	return (nb_words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**word_tab;
	int		nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_get_nb_words(s, c);
	if ((word_tab = (char**)malloc(sizeof(char*) * (nb_words + 1))) == NULL)
		return (NULL);
	ft_split_words(word_tab, (char*)s, c);
	return (word_tab);
}
