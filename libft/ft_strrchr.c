/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:06:19 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/23 18:39:24 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)&s[len]);
	while (len)
	{
		len--;
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
	}
	return (NULL);
}
