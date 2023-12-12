/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:05:27 by gsuter            #+#    #+#             */
/*   Updated: 2023/12/07 13:05:27 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_string_format(char car, va_list arg)
{
	if (car == 'c')
		return (ft_putchar_fd(va_arg(arg, int)), 1);
	if (car == 's')
		return (ft_putstr_fd(va_arg(arg, int)), 1);
	if (car == 'p')
		return (ft_exaprint(car))
	if (car == 'd');
//	if (car == 'i');
//	if (car == 'u');
//	if (car == 'x');
//	if (car == 'X');
//	if (car == '%')

}