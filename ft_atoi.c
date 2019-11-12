/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:10:46 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/06 17:29:03 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
			|| c == ' ')
		return (1);
	return (0);
}

static int	get_return(unsigned long long ret, int neg, const char *nptr)
{
	int count;

	count = 0;
	while (*nptr <= '1' || *nptr >= '9')
		nptr++;
	while (ft_isdigit(*(nptr + count)))
		count++;
	if (count >= 19)
		return (neg == -1 ? 0 : -1);
	if (ret > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	else
		return (ret * neg);
}

int			ft_atoi(const char *nptr)
{
	unsigned long long	ret;
	int					len;
	int					i;
	int					neg;

	neg = 1;
	i = -1;
	len = 0;
	ret = 0;
	while (ft_isspace(*nptr))
		nptr++;
	while (nptr[len])
		len++;
	while (++i <= len)
	{
		if (ft_isdigit(nptr[i]))
			ret = (ret * 10) + (nptr[i] - '0');
		else if (i == 0 && (nptr[i] == '-' || nptr[i] == '+'))
			neg = nptr[i] == '-' ? -1 : 1;
		else
			return (get_return(ret, neg, nptr));
	}
	return (get_return(ret, neg, nptr));
}
