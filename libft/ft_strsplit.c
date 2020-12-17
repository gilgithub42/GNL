/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:24:14 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/27 22:41:20 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbrstring(const char *str, char sep)
{
	char	*pp;
	char	*qq;
	size_t	nbrstring;
	char	*newstr;

	if (!(newstr = ft_strdup(str)))
		return (0);
	pp = newstr;
	nbrstring = 0;
	while (*pp)
	{
		while (*pp == sep)
			pp++;
		if (!*pp)
			break ;
		nbrstring += 1;
		if (!(qq = ft_strchr(pp, sep)))
			break ;
		pp = qq;
		pp++;
	}
	ft_strdel(&newstr);
	return (nbrstring);
}

static void		fillsplittab(char *pp, char **result, char sep)
{
	char	*qq;
	int		j;

	j = 0;
	while (*pp)
	{
		while (*pp == sep)
			pp++;
		if (*pp == '\0')
			break ;
		if (!(qq = ft_strchr(pp, sep)))
		{
			result[j++] = ft_strdup(pp);
			break ;
		}
		*qq = '\0';
		result[j] = ft_strdup(pp);
		pp = qq;
		pp++;
		j++;
	}
	result[j] = NULL;
	return ;
}

char			**ft_strsplit(const char *str, char sep)
{
	char	*pp;
	char	**result;
	char	*newstr;

	if (!str || !(newstr = ft_strdup(str)) || \
			!(result = (char **)malloc(sizeof(char *) \
			* nbrstring(str, sep) + 1)))
		return (NULL);
	pp = newstr;
	fillsplittab(pp, result, sep);
	ft_strdel(&newstr);
	return (result);
}
