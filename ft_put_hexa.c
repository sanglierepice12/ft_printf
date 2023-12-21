/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:49:01 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned int nb, const char *format)
{
	int	len;
	int	tmp;

	len = 0;
	if (nb >= 16)
	{
		tmp = ft_put_hexa(nb / 16, format);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar(format[nb % 16]);
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}
