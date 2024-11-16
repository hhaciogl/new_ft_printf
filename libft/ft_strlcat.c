/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:10:33 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/08 13:25:24 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len_of_cat;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len_of_cat = dst_len + src_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
	return (len_of_cat);
}
