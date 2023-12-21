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

	len = 0;
	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}
