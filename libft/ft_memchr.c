/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:09:41 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 16:45:18 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*The memchr() function scans the initial n bytes of the memory areapointed to 
by s for the first instance of c. Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char. Returns a pointer to the 
matching byte or NULL if the character does not occur.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char )c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main () 
{
   const char str[] = "Raya2111";
   const char ch = '2';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("after memchr |%c| is - |%s|\n", ch, ret);

   ret = ft_memchr(str, ch, strlen(str));

   printf("after ft_memchr |%c| is - |%s|\n", ch, ret);
   return(0);
}
*/
