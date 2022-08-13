/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:56:11 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/13 11:56:18 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	i = 0;
	if (s)
	{
		t = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!t)
			return (NULL);
		while (s[i])
		{
			t[i] = f(i, s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
