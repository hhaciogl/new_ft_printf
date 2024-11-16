/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:21:25 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/15 20:03:36 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len_of_copy_me;
	size_t	size_of_copy_me;
	char	*new_copy;

	len_of_copy_me = ft_strlen(s1);
	size_of_copy_me = len_of_copy_me + 1;
	new_copy = malloc(size_of_copy_me * sizeof(*new_copy));
	if (new_copy == NULL)
		return (NULL);
	ft_strlcpy(new_copy, s1, size_of_copy_me);
	return (new_copy);
}
