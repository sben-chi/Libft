/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:19:14 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/20 13:20:26 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*t;

	if (!new)
	{
		t = ft_lstlast(*alst);
		t->next = NULL;
	}	
	else
	{
		if (!(*alst))
			*alst = new;
		else
		{
			t = ft_lstlast(*alst);
			t->next = new;
		}
		while (new->next)
			new = new->next;
		new->next = NULL;
	}
}
