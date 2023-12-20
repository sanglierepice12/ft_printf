/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:41:55 by gostr             #+#    #+#             */
/*   Updated: 2023/12/20 09:41:55 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(char *arg, ...);
int	ft_putchar(char c);
int ft_putstr(char *str);
int ft_put_percent(void);
int	ft_print_ptr(va_list arg, unsigned long long ptr);


#endif