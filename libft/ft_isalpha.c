/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:51:17 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/09 19:10:15 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}
/*
#include <ctype.h>
int	main()
{
char c = 'A';
	printf("MY FUNTION: %d\n", ft_isalpha(c));
	printf("isalph: %d\n", isalpha(c));
	return (0);
}
*/
