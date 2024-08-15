/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:05:34 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/15 19:19:00 by rgerdzhi         ###   ########.fr       */
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
	else if (format == 'u')
		l = ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		l = ft_puthex(va_arg(args, unsigned int), format == 'X');
	else if (format == 'p')
		l = ft_putptr(va_arg(args, void *));
	return (l);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		total_len;

	i = 0;
	len = 0;
	total_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len = ft_formatter(str[++i], args);
		else
			len = write(1, &str[i], 1);
		if (len == -1)
			return (-1);
		total_len += len;
		i++;
	}
	va_end(args);
	return (total_len);
}
/*
int	main(void)
{
	int num;
	num = 0;
	printf(" Len is: %d\n", ft_printf("Char: %c, %c, %c", 'B', '&', 'b'));
	printf(" Len is: %d\n", ft_printf("Num: %d, %d, %d", -123, -7678, 762537));
	printf(" Len is: %d\n", ft_printf("X: %x, %x, %X, %X", 2147483647, 17, 425, 
	15));
	printf(" Len is: %d\n", ft_printf("Ptr: %p", &num));
	return (0);
}
*/
