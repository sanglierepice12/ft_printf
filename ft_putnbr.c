/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:35:56 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;
	int	tmp;

	len = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		tmp = write(1, "-", 1);
		if (tmp == -1)
			return (-1);
		len += tmp;
		nb *= -1;
	}
	if (nb > 9)
	{
		tmp = ft_putnbr(nb / 10);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar((nb % 10) + '0');
	if (tmp == -1)
		return (-1);
	return (len += tmp, len);
}
