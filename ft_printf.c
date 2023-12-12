/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:33:10 by gsuter            #+#    #+#             */
/*   Updated: 2023/12/07 11:26:26 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int	len;
	int i;

	i = 0;
	len = (int)ft_strlen(str);
	va_list arg;
	va_start(arg, str);

	while (i < len)
	{
		if (str[i] == '%')
		{
			i++;
			ft_string_format(str[i], arg);
		}
		else
			ft_putchar_fd(str[i],1);
		i++;
	}

	return (i);
}