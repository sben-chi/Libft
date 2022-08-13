/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:03:45 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/21 10:54:33 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;

	if (lst && f)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		t = new;
		while (lst)
		{
			t->content = (*f)(lst->content);
			if (!(lst->next))
			{
				t->next = NULL;
				return (new);
			}
			t->next = (t_list *)malloc(sizeof(t_list));
			if (!(t->next))
				ft_lstclear(&new, del);
			t = t->next;
			lst = lst->next;
		}	
	}
	return (NULL);
}
