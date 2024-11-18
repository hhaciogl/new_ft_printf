/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:42:24 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/24 19:26:38 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(needle);
	if (length == 0)
		return ((char *)haystack);
	while (haystack[i] && len > 0)
	{
		if (ft_strncmp(haystack + i, needle, length) == 0 && len >= length)
			return ((char *)haystack + i);
		len--;
		i++;
	}
	return (0);
}
