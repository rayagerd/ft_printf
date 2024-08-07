/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:28:23 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 16:10:13 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < (size_t)start || !len)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}
/*
int	main()
{
	char *result = ft_substr("HELLOWORLD", 5, 0);
	if (result)
	{
		printf("%s\n", result);
		free (result);
	}
	else 
		printf("Sub failed\n");
	return (0);
}*/
