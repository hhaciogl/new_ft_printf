/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:24:34 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/04 13:58:52 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	to_char(long n)
{
	return ("0123456789"[n]);
}

static	void	write_char(long n, int fd)
{
	char	c;

	c = to_char(n);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = (long)n;
	if (n < 0)
	{
		ln = ln * -1;
		ft_putchar_fd('-', fd);
	}
	if (ln < 10 && ln >= 0)
		write_char(ln, fd);
	else
	{
		ft_putnbr_fd(ln / 10, fd);
		write_char(ln % 10, fd);
	}
}
