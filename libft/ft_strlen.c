/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:16:22 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:58:31 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(int argc, char *argv[])
{
	const char *str = argv[1];
	printf("my function: %zu\n", ft_strlen(str));
	printf("strlen: %zu\n", strlen(str));
	return (0);
}
*/
