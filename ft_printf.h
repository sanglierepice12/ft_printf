/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:41:55 by gostr             #+#    #+#             */
/*   Updated: 2023/12/21 09:57:49 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define INT_MIN -2147483648
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *arg, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_put_percent(void);

int	ft_print_ptr(unsigned long long ptr);
int	ft_putnbr(int nb);
int	ft_put_unsigned(unsigned int nb);
int	ft_put_hexa(unsigned int nb, const char *format);

#endif