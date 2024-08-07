/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:46:48 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/18 16:19:09 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*The  strdup() function returns a pointer to a new string which is a duplicate 
of the string s. Memory for the new string is obtained with malloc(3), and can  
be freed with free(3).*/

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*d;

	i = 0;
	len = ft_strlen(s);
	d = ft_calloc(len + 1, 1);
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int	main()
{
	const char	dst[] = "12334*6ybki0";
	char	*result;
	char	*mine;
	result = strdup(dst);
	printf("ctrl: %s\n", result);
	mine = ft_strdup(dst);
	printf("mine: %s\n", mine);
	free(result);
	free(mine);
	return (0);
}
*/
