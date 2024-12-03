/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:06:31 by npezzati          #+#    #+#             */
/*   Updated: 2024/11/27 12:06:40 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
/*void ft_printlst(t_list *lst)
{
	while(lst){
		printf("%s ->", (char *)lst->content);
		lst = lst->next;
		}
	printf("NULL\n");
}
int main(){
	char *s3 = "ciao";
	char *s1 = "hei";
	char *s2= "tu";
	t_list *head = ft_lstnew(s1);
	t_list *node2 = ft_lstnew(s2);
	t_list *node3 = ft_lstnew(s3);
	
	head->next = node2;
	ft_lstadd_back(&head, node3);
	
	ft_printlst(head);
	free(head);
	free(node2);
	free(node3);
	return 0;
}*/
