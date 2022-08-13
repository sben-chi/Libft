/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:59:19 by sben-chi          #+#    #+#             */
/*   Updated: 2021/11/30 12:23:33 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nb;
	int					sign;
	unsigned long long	max;

	nb = 0;
	sign = 1;
	max = 9223372036854775807;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		if (nb > max + 1 && sign < 0)
			return (0);
		if (nb > max && sign > 0)
			return (-1);
		nb = (nb * 10) + (*str - 48);
		str++;
	}
	return (nb * sign);
}
