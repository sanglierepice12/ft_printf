/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostr <gostr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:55:11 by gostr             #+#    #+#             */
/*   Updated: 2023/12/20 09:55:11 by gostr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		(write(1, &str[i], 1));
		i++;
	}
	return (i);
}

int ft_put_percent(void)
{
	return (write(1, "%", 1));
}