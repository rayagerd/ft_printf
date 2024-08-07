/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:39:00 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 18:39:04 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (len_dst < size && dst[len_dst] != '\0')
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (len_dst >= size)
		return (size + len_src);
	while (src[i] != '\0' && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int main() 
{
    char dst[20] = "Hello";
    const char src[] = "absgegdj";

    printf("Before strlcat: %s\n", dst);

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("After strlcat: %s\n", dst);
    printf("Total length: %zu\n", result);
	return 0;
}
*/
