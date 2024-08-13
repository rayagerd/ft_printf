/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:27:26 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/08/13 19:02:48 by rgerdzhi         ###   ########.fr       */
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
		return ("(null)");
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
	else if (n > 9)
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
long	ft_puthex
