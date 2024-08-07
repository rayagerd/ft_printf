/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:26:16 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 16:50:28 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*The  strchr() function returns a pointer to the first occurrence of the 
character c in the string s. Returns a pointer to the matched character or 
NULL if the character is not found. The terminating null byte is considered
part  of  the string, so that if c is specified as '\0', these functions 
return a pointer to the terminator.*/

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main () 
{
   const char str[] = "Hello, World!123498652#%$%";
   const char ch = 'l';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}
*/
