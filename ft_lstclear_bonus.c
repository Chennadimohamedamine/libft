/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bounus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:39:50 by mochenna          #+#    #+#             */
/*   Updated: 2023/11/13 22:21:28 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear_list;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	clear_list = *lst;
	while (clear_list != NULL)
	{
		next = clear_list->next;
		del(clear_list->content);
		free(clear_list);
		clear_list = next;
	}
	*lst = NULL;
}
