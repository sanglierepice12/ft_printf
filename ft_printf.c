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

static int	ft_strlen(char *arg)
{
	int	i;
	
	i = 0;
	while (arg[i])
		i++;
	return (i);
}

static int	ft_format(va_list arg, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg (arg, int)));
	if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (format == 'p')
		return ();
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
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(arg, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

int main(int arc, char **argv)
{
	if (arc < 2)
		return 0;
	ft_printf("coucou %c", argv[1]);
	return 0;
}