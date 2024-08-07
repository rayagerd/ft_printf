/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:11:55 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/17 15:58:22 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main() 
{
    char *content1 = "Node 1";
    char *content2 = "Node 2";
    char *content3 = "Node 3";

    t_list *node1 = ft_lstnew((void *)content1);
    t_list *node2 = ft_lstnew((void *)content2);
    t_list *node3 = ft_lstnew((void *)content3);

    t_list *head = node1;
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    int size = ft_lstsize(head);
    printf("List size: %d\n", size);
    free(node1);
    free(node2);
    free(node3);
    return (0);
}
*/
