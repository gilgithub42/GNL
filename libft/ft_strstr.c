/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:48:51 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 22:29:14 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(const char *x, const char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);
		x++;
		y++;
	}
	return (*y == '\0');
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*p;

	p = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (p);
	while (*p != '\0')
	{
		if ((*p == *needle) && compare(p, needle))
			return (p);
		p++;
	}
	return (NULL);
}
