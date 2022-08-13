/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:05:31 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 14:29:48 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;
	size_t	i;

	i = 0;
	t = (void *)malloc(size * count);
	if (!t)
		return (NULL);
	return (ft_memset(t, '\0', (size * count)));
}
