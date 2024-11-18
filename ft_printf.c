/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:40:25 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/18 16:41:20 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>

int ft_printf(const char *format, ...)
{
	va_list a_list;
	va_start(a_list, format);
	(void)format;
	size_t len;
	return 1;
}
