/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:57:18 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/15 20:10:00 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_to_int(char c)
{
	if (c >= '0' && c <= '9')
		return (c - ('0' - 0));
	return (0);
}

static int	pow_ten(int size)
{
	if (size == 0)
		return (0);
	if (size == 1)
		return (1);
	return (10 * pow_ten(size - 1));
}

static int	trim(const char *str, int *index, int *len)
{
	int	i;
	int	is_negatif;

	i = 0;
	is_negatif = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negatif = 1;
		i++;
	}
	*index = i;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	*len = i - *index;
	return (is_negatif);
}

static int	_ft_atoi(const char *str, int index, int len)
{
	if (len == 0)
		return (0);
	if (len == 1)
		return (char_to_int(str[index]) * pow_ten(len));
	return (_ft_atoi(str, index + 1, len - 1)
		+ (char_to_int(str[index]) * pow_ten(len)));
}

int	ft_atoi(const char *str)
{
	int		len;
	int		index;
	int		is_negatif;
	long	out;

	is_negatif = trim(str, &index, &len);
	out = _ft_atoi(str, index, len);
	if (is_negatif)
		return (out * -1);
	return (out);
}
