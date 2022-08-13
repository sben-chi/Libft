/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:21:56 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/20 13:01:21 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	w_count(char const *s, char c, int *count)
{
	int	ltrs;
	int	words;
	int	j;
	int	i;

	ltrs = 0;
	i = 0;
	j = 1;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		while (s[i] != c && s[i])
		{
			ltrs++;
			i++;
		}
		words++;
		count[j++] = ltrs;
	}
	count[0] = words;
}

static char	**t_alloc(int *count)
{
	int		i;
	int		k;
	char	**t;

	i = 1;
	k = 0;
	t = (char **)malloc(sizeof(char *) * (count[0] + 1));
	if (!t)
		return (NULL);
	while (k < count[0])
	{
		t[k] = (char *)malloc(sizeof(char) * (count[i] + 1));
		if (!t[k])
		{
			while (k >= 0)
				free (t[k--]);
			free(t);
			return (NULL);
		}
		k++;
		i++;
	}
	return (t);
}

static void	t_fill(char const *s, char c, char **t, int *count)
{
	int	k;
	int	j;
	int	i;

	if (s)
	{	
		k = 0;
		i = 0;
		while (k < count[0])
		{
			j = 0;
			while (s[i] == c)
				i++;
			while (s[i] != c && s[i])
			{
				t[k][j] = s[i];
				i++;
				j++;
			}
			t[k][j] = '\0';
			k++;
		}
		t[k] = NULL;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		*count;

	if (s)
	{
		t = NULL;
		count = (int *)malloc(sizeof(int) * ((ft_strlen(s) / 2) + 2));
		if (!count)
			return (NULL);
		w_count(s, c, count);
		t = t_alloc(count);
		t_fill(s, c, t, count);
		free (count);
		return (t);
	}
	return (NULL);
}
