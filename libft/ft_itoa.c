/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:07:48 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/05 15:51:40 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	int_to_char(int n)
{
	return ("0123456789"[n]);
}

static size_t	get_int_size(int n, int *is_negatif)
{
	size_t	i;
	long	l_int;

	i = 2;
	l_int = n;
	if (n < 0)
	{
		*is_negatif = 1;
		i++;
		l_int = l_int * -1;
	}
	else
		*is_negatif = 0;
	while (l_int > 9)
	{
		l_int = l_int / 10;
		i++;
	}
	return (i);
}

static void	swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static char	*reverse(char *str)
{
	size_t	i;
	char	*end;

	i = 0;
	end = str + ft_strlen(str) - 1;
	while (str + i < end - i)
	{
		swap(str + i, end - i);
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	size;
	int		is_negatif;
	long	l_int;

	l_int = n;
	size = get_int_size(n, &is_negatif);
	out = malloc(size);
	if (out == NULL)
		return (NULL);
	if (is_negatif)
	{
		out[size - 2] = '-';
		l_int = l_int * -1;
	}
	out[size - 1] = '\0';
	size = 0;
	while (l_int > 9)
	{
		out[size] = int_to_char(l_int % 10);
		l_int = l_int / 10;
		size++;
	}
	out[size] = int_to_char(l_int);
	return (reverse(out));
}
