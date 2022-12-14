/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:01:26 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/26 09:48:40 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*t;

	t = lst;
	if (!lst || !f)
		return ;
	while (t)
	{
		f(t->content);
		t = t->next;
	}
}
