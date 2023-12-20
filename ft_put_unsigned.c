/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:55:16 by gostr             #+#    #+#             */
/*   Updated: 2023/12/20 15:55:16 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_unsigned(unsigned int nb)
{
	int len;

	len = 0;
	if (nb == 0)
		len += ft_putchar('0');
	else
	{
		if (nb > 9)
			len += ft_put_unsigned(nb / 10);
		len += ft_putchar((nb % 10) + 48);
	}
	return (len);
}