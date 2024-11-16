/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:56:49 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/04 16:31:45 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

static	int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
