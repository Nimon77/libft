/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:17:35 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/06 17:21:45 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;

	if (s == 0 || len == 0)
		return (0);
	if ((newstr = malloc(sizeof(*newstr) * len + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
