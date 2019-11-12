/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:19:59 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/05 17:47:52 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_end;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	dst_end = i;
	if (dstsize == 0)
		return (dst_end);
	while (src[i - dst_end] && i < dstsize - 1)
	{
		dst[i] = src[i - dst_end];
		i++;
	}
	if (dst_end < dstsize)
		dst[i] = '\0';
	return (dst_end + ft_strlen(src));
}
