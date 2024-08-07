/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:17:09 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:49:58 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
		{
			((char *)dest)[n] = ((const char *)src)[n];
		}
	}
	else
	{
		while (n--)
		{
			*(char *)dest++ = *(const char *)src++;
		}
	}
	return (dest_ptr);
}

/*
int main () 
{
   char dest[] = "Ra";
   const char src[]  = "Hello";

   memmove(dest, src, 3);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 3);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);
   return(0);
}
*/
