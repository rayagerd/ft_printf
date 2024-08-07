/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:39:57 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/09 21:47:20 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	size = end - start;
	trim = (char *)ft_calloc(size + 1, sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, size + 1);
	return (trim);
}
/*
int	main()
{
	char *result;
	result = ft_strtrim("RAYAYARAYA", "RA");
	printf("%s\n", result);
	free (result);
	return (0);
}
*/
