/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:36:15 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/14 20:26:55 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	dl = ft_strlen(dst);
	if (dstsize < dl)
		return (dstsize + ft_strlen(src));
	while (dl < (dstsize - 1) && src[i])
	{
		dst[dl] = src[i];
		i++;
		dl++;
	}
	dst[dl] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
