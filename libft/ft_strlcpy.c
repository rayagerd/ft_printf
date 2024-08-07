/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:17:44 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 17:06:34 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main() 
{
    char dst[3];
    const char *src = "Hols";
    
    size_t result = ft_strlcpy(dst, src, sizeof(dst));
    
    printf("Copied string: %s\n", dst);
    printf("Length of source string: %zu\n", result);
    
    return 0;
}*/
