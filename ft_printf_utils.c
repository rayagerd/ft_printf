/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:27:26 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/19 15:15:02 by rgerdzhi         ###   ########.fr       */
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

//%x && %X && %p
long	ft_puthex(unsigned long int n, int pointer, char *digits)
{
	int	len;
	int	rt;

	if (pointer == 1 && n == 0)
		return (ft_putstr("(nil)"));
	len = 0;
	if (pointer == 1 && n != 0)
	{
		if (ft_putstr("0x") == -1)
			return (-1);
		len += 2;
	}
	if (n >= 16)
	{
		rt = ft_puthex((n / 16), 0, digits);
		if (rt == -1)
			return (-1);
		len += rt;
	}
	if (ft_putchar(digits[n % 16]) == -1)
		return (-1);
	len++;
	return (len);
}
