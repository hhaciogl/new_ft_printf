/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:51:18 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/05 15:49:40 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_size;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_size = s1_len + s2_len + 1;
	new_str = malloc(total_size * sizeof(*new_str));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, s1_len);
	ft_memcpy(new_str + s1_len, s2, s2_len);
	new_str[total_size - 1] = '\0';
	return (new_str);
}
