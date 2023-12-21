/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:07:31 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static void	ft_put_ptr(uintptr_t num, int *len)
{
	int	tmp;

	if (num >= 16)
	{
		ft_put_ptr(num / 16, len);
		ft_put_ptr(num % 16, len);
	}
	else
	{
		if (num <= 9)
			tmp = ft_putchar((num + '0'));
		else
			tmp = ft_putchar((num - 10 + 'a'));
		if (tmp == -1)
			return (*len = -1, (void)0);
		*len += tmp;
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len += write (1, "0x", 2);
	if (len == -1)
		return (len);
	ft_put_ptr(ptr, &len);
	if (len == -1)
		return (len);
	return (len);
}
