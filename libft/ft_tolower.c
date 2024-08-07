/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:52:50 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 18:00:33 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}
/*
int	main(int argc, char *argv[])
{
	char	c;
	
	c = argv[1][0];
	c = tolower(c);
	printf("Tolower is: %c\n", tolower(c));
	c = ft_tolower(c);
	printf("My function: %c\n", ft_tolower(c));
	return 0;
}
*/
