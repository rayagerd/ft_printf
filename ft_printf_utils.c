/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:27:26 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/15 19:01:58 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

//%c 
int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

//%s
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		if (write(1, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

//%d && %i && %u
long	ft_putnbr(long n)
{
	int	len;
	int	nb;

	len = 0;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len++;
		n = -n;
	}
	if (n > 9)
	{
		nb = ft_putnbr(n / 10);
		if (nb == -1 || ft_putchar((n % 10) + '0') == -1)
			return (-1);
		len += nb + 1;
	}
	else
	{
		if (ft_putchar(n + '0') == -1)
			return (-1);
		len++;
	}
	return (len);
}

//%x && %X
int	ft_puthex(unsigned int n, int up)
{
	char	*digits;
	int		len;

	if (up)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		len += ft_puthex((n / 16), up);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar(digits[n % 16]) == -1)
		return (-1);
	return (len + 1);
}

int	ft_putptr(void *ptr)
{
	char				*digits;
	int					len;
	unsigned long int	address;

	len = 0;
	digits = "0123456789abcdef";
	address = (unsigned long int)ptr;
	len += ft_putstr("0x");
	while (address)
	{
		if (ft_putchar(digits[address % 16]) == -1)
			return (-1);
		len++;
		address /= 16;
	}
	return (len);
}
