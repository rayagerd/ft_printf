/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:39:25 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 18:00:57 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	
	c = argv[1][0];
	c = toupper(c);
	printf("Toupper is: %c\n", toupper(c));
	c = ft_toupper(c);
	printf("My function: %c\n", ft_toupper(c));
	return 0;
}
*/
