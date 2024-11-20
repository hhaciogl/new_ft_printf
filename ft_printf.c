/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:40:25 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/20 19:49:52 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	size_t	i;
	size_t	j;
	int is_F;

	i = 0;
	j = 0;
	is_F = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i+1])
		{
			is_F = 1;
			if (format[i+1] == '%' && !is_F)
			{
				ft_putchar_fd('%', 1);
			}
			else
			{
				return (-1);
			}
			is_F = 0;
		}
		else
		{
			ft_putchar_fd((char)format[i], 1);
		}

		i++;
	}
	va_end(arg_list);
	return (i+j);
}
