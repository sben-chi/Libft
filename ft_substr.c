/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:13:23 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/17 21:38:36 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len)
	{
		if (s[start] == '\0')
			break ;
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	j;
	int		nlen;

	if (s)
	{
		j = 0;
		nlen = count_len(s, start, len);
		t = (char *)malloc(sizeof(char) * nlen);
		if (!t)
			return (NULL);
		if (start < ft_strlen(s))
		{
			while ((j < len) && s[start])
			{
				t[j] = s[start];
				start++;
				j++;
			}
		}
		t[j] = '\0';
		return (t);
	}
	return (NULL);
}
