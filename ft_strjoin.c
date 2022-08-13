/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:25:35 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 11:51:15 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		t = (char *)malloc(sizeof(char) * (len + 1));
		if (!t)
			return (NULL);
		while (s1[i])
		{
			t[i] = s1[i];
			i++;
		}
		while (s2[j])
			t[i++] = s2[j++];
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
