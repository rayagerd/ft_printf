/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:48:52 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/25 15:46:01 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//"hola que       tal" -> 3
//" hola que      tal" -> 3
//"hola que     tal " -> 3
//"                     " -> 0
//"" -> 0
static int	ft_count(char const *s, char c)
{
	int	counter;
	int	i;

	if (!s)
		return (NULL);
	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == '\0')
				return (counter);
		}
		i++;
	}
	return (counter);
}

static void	ft_free(char **farray, int failed)
{
	while (failed > 0)
	{
		free(farray[failed - 1]);
		failed--;
	}
	free(farray);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num_words;
	int		i;
	int		j;

	array = (char **)ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	num_words = 0;
	while (num_words < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		array[num_words] = ft_substr(s, j, i - j);
		if (!array[num_words++])
			return (ft_free(array, num_words), NULL);
	}
	array[num_words] = NULL;
	return (array);
}
/*
int	main()
{
	//char a[200] = "    HOLA iiii    RAYA";
	//char a[50] = "";
	char **ret;
	int i;

	i = 0;
	ret = ft_split("", ' ');
	while(ret[i])
		printf("%s\n", ret[i++]);
	return (0);
}
*/
