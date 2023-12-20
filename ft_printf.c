/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:41:24 by gostr             #+#    #+#             */
/*   Updated: 2023/12/20 09:41:24 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_format(va_list arg, char format)
{
	int a = 0;
	if (format == 'c')
		return (ft_putchar(va_arg (arg, int)));
	if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(arg, unsigned long long)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (format == 'u')
		return (ft_put_unsigned(va_arg(arg, unsigned int)));
	if (format == '%')
		return ft_put_percent();
	return (-1);
}

int	ft_printf(char *str, ...)
{
	va_list arg;
	va_start(arg, str);
	int	len;
	int i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_format(arg, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

#include <stdlib.h>

int main(int arc, char **argv)
{
	if (arc < 2)
		return 0;
	int a = ft_printf("printf : %d", atoi(argv[1]));
	printf("\na = %d", a);
	printf("\ncoucou : %u", atoi(argv[1]));
	return 0;
}