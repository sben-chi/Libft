/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:58:31 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 20:51:31 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*t;

	i = 0;
	j = 0;
	t = (char *)haystack;
	if (needle[0] == '\0')
		return (t);
	while (haystack[i])
	{
		if (t[i] == needle[j])
		{
			while (t[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0' && (i + j) < len)
					return (&t[i]);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
