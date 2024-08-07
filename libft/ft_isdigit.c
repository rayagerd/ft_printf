/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:15:44 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:48:14 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2084);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	c = argv[1][0];
	printf("myfunction: %d\n", ft_isdigit(c));
	printf("isdigit: %d\n", isdigit(c));
	return (0);
}
*/
