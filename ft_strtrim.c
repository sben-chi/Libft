/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:07:49 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/16 14:27:26 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_start(char const *s1, int len, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			else
				j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static int	check_end(char const *s1, int len, char const *set)
{
	int	j;
	int	i;

	i = 0;
	while (len)
	{
		j = 0;
		while (set[j])
		{
			if (s1[len - 1] == set[j])
			{
				i++;
				break ;
			}
			else
				j++;
		}
		if (set[j] == '\0')
			break ;
		len--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	int		len;
	int		len_s;
	char	*t;

	if (s1 && set)
	{
		k = 0;
		len_s = ft_strlen(s1);
		i = check_start(s1, len_s, set);
		if (i == len_s)
			len = 0;
		else
			len = len_s - (i + check_end(s1, len_s, set));
		t = (char *)malloc(sizeof(char) * (len + 1));
		if (!t)
			return (NULL);
		while (k < len && s1[i])
			t[k++] = s1[i++];
		t[k] = '\0';
		return (t);
	}
	return (NULL);
}
