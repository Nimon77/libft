/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:17:18 by nsimon            #+#    #+#             */
/*   Updated: 2019/11/08 10:57:46 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_isinstr(const char s, char to_find)
{
	if (s == to_find && s != '\0')
		return (1);
	return (0);
}

static int		nb_split(const char *s, const char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (ft_isinstr(c, s[i]) && !(ft_isinstr(c, s[i + 1])))
			nb++;
		i++;
	}
	if (!ft_isinstr(c, s[i - 1]))
		nb++;
	return (nb);
}

static int		ft_wordlen(const char *s, const char c, int i)
{
	while (!ft_isinstr(c, s[i]) && s[i] != '\0')
		i++;
	return (i);
}

static void		*ft_clean(char **split, int splitlen)
{
	int	i;

	i = 0;
	while (i <= splitlen)
	{
		if (split[i] != NULL)
			free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char			**ft_split(const char *s, const char c)
{
	char	**split;
	int		wordlen;
	int		ligne;
	int		splitlen;
	int		i;

	i = 0;
	ligne = 0;
	splitlen = nb_split(s, c);
	if ((split = malloc(sizeof(*split) * (splitlen + 1))) == NULL)
		return (NULL);
	while (ligne < splitlen && s[i] != '\0')
	{
		wordlen = ft_wordlen(s, c, i) - i + 1;
		if (s[i] != '\0' && !ft_isinstr(c, s[i]))
		{
			if ((split[ligne] = malloc(sizeof(**split) * wordlen))
					== NULL)
				return (ft_clean(split, splitlen));
			ft_strlcpy(split[ligne++], &s[i], wordlen);
		}
		i += wordlen;
	}
	split[ligne] = 0;
	return (split);
}
