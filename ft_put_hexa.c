/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:49:01 by gostr             #+#    #+#             */
/*   Updated: 2023/12/20 16:49:01 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_hexa(unsigned int nb, const char format)
{
	int len;

	len = 0;
	if (nb >= 16)
	{
		len += ft_put_hexa(nb / 16, format);
		len += ft_put_hexa(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			len += ft_putchar(nb + '0');
		else
		{
			if (format == 'x')
				len += ft_putchar((nb - 10) + 'a');
			else if (format == 'X')
				len += ft_putchar((nb - 10) + 'A');
		}
	}
	return (len);
}