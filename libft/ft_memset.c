/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:59:46 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 15:54:09 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

/* Fills the first n bytes of the memory area pointed to by s with the constant 
byte c. The memset() function returns a pointer to the memory area s.*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int	main() 
{ 
	char *str = NULL;	
	printf("Before ft_memset(): %s\n", str);
	//fill 3 bytes with * starting from str[4]
	ft_memset(str + 4, '*', 3);
	printf("After ft_memset): %s\n", str);
       	//fill 3 bytes with a starting from str[4]
	memset(str + 4, 'a', 3);  
	printf("After memset(): %s\n", str);
	return (0); 
}*/
