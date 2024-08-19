/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:05:34 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/19 15:14:40 by rgerdzhi         ###   ########.fr       */
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
    // Testing %c with null character and regular characters
    printf("Original: %c, %c, %c, %c\n", 'A', 'v', 'R', '\0');
    ft_printf("Mine: %c, %c, %c, %c\n", 'A', 'v', 'R', '\0');

    // Testing %s with regular strings, empty string, and null pointer
    printf("Original: %s, %s, %s, %s\n", "Hello", "world", "ft_printf", "");
    ft_printf("Mine: %s, %s, %s, %s\n", "Hello", "world", "ft_printf", "");

    // Testing %i and %d with positive, negative, and zero values
    printf("Original: %d, %d, %d, %i, %i, %i\n", 42, -42, 0, 42, -42, 0);
    ft_printf("Mine: %d, %d, %d, %i, %i, %i\n", 42, -42, 0, 42, -42, 0);

    // Testing %u with regular unsigned integers, maximum value, and zero
    printf("Original: %u, %u, %u, %u\n", 42, 4294967295u, 0, (unsigned int)-1);
    ft_printf("Mine: %u, %u, %u, %u\n", 42, 4294967295u, 0, (unsigned int)-1);

    // Testing %x with positive numbers and edge cases (0 and max)
    printf("Original: %x, %x, %x, %x\n", 42, 255, 4096, 0);
    ft_printf("Mine: %x, %x, %x, %x\n", 42, 255, 4096, 0);

    // Testing %X with positive numbers and edge cases (0 and max)
    printf("Original: %X, %X, %X, %X\n", 42, 255, 4096, 0);
    ft_printf("Mine: %X, %X, %X, %X\n", 42, 255, 4096, 0);

    // Testing %p with a valid pointer, null pointer, and edge case
    int a = 0;
    int *ptr = &a;
    printf("Original: %p, %p, %p\n", ptr, NULL, (void *)-1);
    ft_printf("Mine: %p, %p, %p\n", ptr, NULL, (void *)-1);

    // Testing %% to print literal percentage signs
    printf("Original: %%\n");
    ft_printf("Mine: %%\n");

    // Return value check
    int len_original = printf("TEST1: %c, %s, %d, %i, %u, %x, %X, %p, %%\n", 
	'A', "Test", 123, 456, 789u, 0xabc, 0xABC, ptr);
    int len_custom = ft_printf("TEST2: %c, %s, %d, %i, %u, %x, %X, %p, %%\n",
	'A', "Test", 123, 456, 789u, 0xabc, 0xABC, ptr);
    printf("Original Total length: %d\n", len_original);
    ft_printf("Custom Total length: %d\n", len_custom);
    return (0);
}*/
