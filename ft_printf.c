/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:05:34 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/18 16:13:25 by rgerdzhi         ###   ########.fr       */
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
	else if (format == 'x')
		l = ft_puthex(va_arg(args, unsigned int), 0, "0123456789abcdef");
	else if (format == 'X')
		l = ft_puthex(va_arg(args, unsigned int), 0, "0123456789ABCDEF");
	else if (format == 'p')
		l = ft_puthex(va_arg(args, unsigned long), 1, "0123456789abcdef");
	else if (format == '%')
		l = ft_putchar('%');
	if (l == -1)
		return (-1);
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
int main(void)
{
    //%c
    printf("Original: %c, %c, %c\n", 'A', 'v', 'R');
    ft_printf("Mine: %c, %c, %c\n", 'A', 'v', 'R');

    //%s
    printf("Original: %s, %s, %s\n", "Hello", "world", "ft_printf");
    ft_printf("Mine: %s, %s, %s\n", "Hello", "world", "ft_printf");

    //%i && %d
    printf("Original: %d, %d, %d\n", 42, -42, 0);
    ft_printf("Mine: %d, %d, %d\n", 42, -42, 0);

    printf("Original (%%i): %i, %i, %i\n", 42, -42, 0);
    ft_printf("Mine (%%i): %i, %i, %i\n", 42, -42, 0);

    //%u
    printf("Original: %u, %u, %u\n", 42, 4294967295u, 0);
    ft_printf("Mine: %u, %u, %u\n", 42, 4294967295u, 0);

    //%x
    printf("Original: %x, %x, %x\n", 42, 255, 4096);
    ft_printf("Mine: %x, %x, %x\n", 42, 255, 4096);

    //%X
    printf("Original: %X, %X, %X\n", 42, 255, 4096);
    ft_printf("Mine: %X, %X, %X\n", 42, 255, 4096);

    //%p
    int a = 4586;
    int *ptr = &a;
    printf("Original: %p\n", ptr);
    ft_printf("Mine: %p\n", ptr);

    //%%
    printf("Original: %%\n");
    ft_printf("Mine: %%\n");

    // Return value check
    int len_original = printf("TEST: %c, %s, %d, %i, %u, %x, %X, %p, %%\n", 'A'
	, "Test", 123, 456, 789u, 0xabc, 0xABC, ptr);
    int len_custom = ft_printf("Custom Complete test: %c, %s, %d, %i, %u, %x, 
	%X, %p, %%\n", 'A', "Test", 123, 456, 789u, 0xabc, 0xABC, ptr);
    printf("Original Total length: %d\n", len_original);
    ft_printf("Custom Total length: %d\n", len_custom);

    return (0);
}
*/
