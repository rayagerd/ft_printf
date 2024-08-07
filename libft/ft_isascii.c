/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:58:15 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:47:50 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char c;
	c = argv[1][0];
	printf("my function: %d\n", ft_isascii(c));
	printf("isascii: %d\n", isascii(c));
	return (0);
}
*/
