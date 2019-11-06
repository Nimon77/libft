/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:29:43 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/06 17:48:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	set_len;
	size_t	ptr_len;
	char	*ptr_temp;
	char	*ptr;

	set_len = ft_strlen(set);
	ptr_temp = ft_strnstr(s1, set, set_len);
	ptr_len = ft_strlen(ptr);
	ft_memcpy(ptr, ptr_temp, ptr_len);
	
	return (ptr);
}
