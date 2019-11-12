/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:19:31 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/12 18:01:10 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		if (alst[0] != NULL)
		{
			*alst = ft_lstlast(*alst);
			alst[0]->next = new;
		}
		else
			alst[0] = new;
	}
}
