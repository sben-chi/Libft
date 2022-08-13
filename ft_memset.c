/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:17:20 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 11:43:02 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*a;

	a = b;
	while (len)
	{
		*((unsigned char *)b) = (unsigned char)c;
		b++;
		len--;
	}
	return (a);
}
