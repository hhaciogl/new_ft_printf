/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/15 20:10:04 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	**clean_up(char ***out, size_t out_size)
{
	while (out_size)
	{
		out_size--;
		free((*out)[out_size]);
	}
	free(*out);
	return (NULL);
}

static	char	**get_split_arr(char c, char const *s)
{
	size_t	out_size;
	size_t	i;
	char	**out;

	i = 0;
	out_size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			out_size++;
		}
		if (s[i] != '\0')
			i++;
	}
	out = malloc((out_size + 1) * sizeof(char *));
	return (out);
}

static char	**add_words(char c, char const *s, char **out)
{
	size_t	i;
	size_t	out_size;
	size_t	word_start;
	char	*word;

	i = 0;
	out_size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			word = ft_substr(s, word_start, (i - word_start));
			if (word == NULL)
				return (clean_up(&out, out_size));
			out[out_size] = word;
			out_size++;
		}
		if (s[i] != '\0')
			i++;
	}
	out[out_size] = NULL;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;

	out = get_split_arr(c, s);
	if (out == NULL)
		return (NULL);
	return (add_words(c, s, out));
}
