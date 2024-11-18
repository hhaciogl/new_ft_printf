/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:01:31 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/08 00:09:58 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdst;
	unsigned const char	*psrc;

	if (dst == NULL && src == NULL)
		return (0);
	pdst = dst;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
