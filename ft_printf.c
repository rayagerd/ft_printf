/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:05:34 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/07 19:47:24 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_formatter(const char format, va_list args)
{
	int	l;

	l = 0;
	if (format == 'c')
		l = ft_putchar(va_arg(args, int));
	else if (format == 's')
		l = ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		l = ft_putnbr(va_arg(args, int));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
}
