/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:41:24 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg (args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_put_hexa(va_arg(args, unsigned int), format));
	if (format == '%')
		return (ft_put_percent());
	return (-1);
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		len;
	int		temp;
	int		i;

	i = 0;
	len = 0;
	temp = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				return (va_end(args), -1);
			temp = ft_format(args, str[i]);
			if (temp == -1)
				return (va_end(args), -1);
			len += temp;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	return (va_end(args), len);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(int arc, char **argv)
{
	if (arc < 2)
		return 0;


	printf("c : %c - %c\n", argv [1][0], argv [1][1]);
	ft_printf("c : %c - %c\n", argv [1][0], argv [1][1]);
	printf("s : %s\n", argv[1]);
	ft_printf("s : %s\n", argv[1]);
	printf("p : %p\n", argv[1]);
	ft_printf("p : %p\n", argv[1]);*


	printf("d : %d - %c\n", 0, argv[1][0]);
	ft_printf("d : %d - %c - %u\n", 0, argv[1][0], atoi(argv[2]));
	printf("i : %i\n", 0);
	ft_printf("i : %i\n", 0);
	printf("u : %u\n", 0);
	ft_printf("u : %u\n", 0);
	printf("x : %x\n", atoi(argv[2]));
	ft_printf("x : %x\n", atoi(argv[2]));
	printf("X : %X\n", atoi(argv[2]));
	ft_printf("X : %X\n", atoi(argv[2]));

	printf("real %d\n", printf("    %%%%%%\n"));
	printf("moi %d\n", ft_printf("    %%%%%%\n"));


	char *s = "slay";
	char *n = NULL;

	printf("%d\n", ft_printf("%s", s));
	printf("%d\n\n", printf("%s", s));

	printf("%d\n", ft_printf("%x", INT_MAX));
	printf("%d\n\n", printf("%x", INT_MAX));

	printf("%d\n", ft_printf("%s", n));
	printf("%d\n\n", printf("%s", n));

	printf("%d\n", ft_printf("%p", n));
	printf("%d\n\n", printf("%p", n));

	printf("%d\n", ft_printf("%"));
	printf("%d\n\n", printf("%"));

	return 0;
}*/
