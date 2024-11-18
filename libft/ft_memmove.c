/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:21:06 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/28 15:44:04 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;

	pdst = dst;
	psrc = src;
	if (dst == (void *)0 && src == (void *)0)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		*(pdst + len - 1) = *(psrc + len - 1);
		len--;
	}
	return (dst);
}
