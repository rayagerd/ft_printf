/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 01:13:56 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/25 15:56:02 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	to_func(unsigned int i, char *c)
{
	(void)i;
	if (ft_isdigit(*c))
		*c = '@';
	else if (ft_isalpha(*c))
		*c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "hello world1234687&&*";

    printf("Original string: %s\n", str);
    ft_striteri(str, to_func);
    printf("Modified string: %s\n", str);
    return (0);
}*/
