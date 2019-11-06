/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:10:46 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/06 10:52:42 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	long	value;
	int		neg;

	i = 0;
	value = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
	{
		if ((str[i] != '-' && str[i] != '+' && str[i] != '\t' && str[i] != '\v'
					&& str[i] != '\f' && str[i] != '\r' && str[i] != '\n'
					&& str[i] != ' ') || str[i - 1] == '-' || str[i - 1] == '+')
			return (0);
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (value != 0)
			value *= 10;
		value += str[i++] - '0';
	}
	if (neg != 0)
		value = (value * neg);
	return (value);
}
