/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:23:39 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 11:48:01 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!t)
		return (NULL);
	while (src[i])
	{
		t[i] = ((char *)src)[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
