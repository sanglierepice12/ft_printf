/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:55:16 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int nb)
{
	int	len;
	int	tmp;

	len = 0;
	if (nb == 0)
	{
		tmp = ft_putchar('0');
		len += tmp;
	}
	else
	{
		if (nb > 9)
			len += ft_put_unsigned(nb / 10);
		tmp = ft_putchar((nb % 10) + 48);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	return (len);
}
