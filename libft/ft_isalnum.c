/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:34:56 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 18:35:06 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char c;
	c = argv[1][0];
	printf("MY FUNTION: %d\n", ft_isalnum(c));
	printf("isalnum: %d\n", isalnum(c));
	return (0);
}*/
