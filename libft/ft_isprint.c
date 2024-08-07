/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:59:44 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:48:36 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char c;
	c = argv[1][0];
	printf("my function: %d\n", ft_isprint(c));
	printf("isprint: %d\n", isprint(c));
	return (0);
}
*/
