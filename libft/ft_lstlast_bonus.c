/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:06:21 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/17 17:22:31 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	char *content1 = "Raya";
	char *content2 = "42";
	//Create nodes
	t_list *node1 = ft_lstnew((void *)content1);
	t_list *node2 = ft_lstnew((void *)content2);
	// Create list
	t_list *head = node1;
	node1->next = node2;
	t_list *last = ft_lstlast(head);
    if (last != NULL)
        printf("Last node content: %s\n", (char *)last->content);
    else 
        printf("The list is empty.\n");
    free(node1);
    free(node2);
    return (0);
}
*/
