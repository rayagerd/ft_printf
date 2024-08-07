/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:53:11 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:58:59 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0' && c < (n - 1))
	{
		c++;
	}
	return ((unsigned char )s1[c] - (unsigned char )s2[c]);
}
/*
int main () 
{
   char str1[15] = "Raya2111111";
   char str2[15] = "NULL";
   int ret;

   ret = strncmp(str1, str2, -1);
   if (ret < 0)	   
	   printf("str1 is less than str2\n");
	else if(ret > 0) 
      printf("str2 is less than str1\n");
	else 
      printf("str1 is equal to str2\n");
   
   ret = ft_strncmp(str1, str2, -1);
    if(ret < 0) 
		printf("str1 is less than str2");
    else if(ret > 0)
		printf("str2 is less than str1");
	  else 
        printf("str1 is equal to str2");
   return(0);
}
*/
