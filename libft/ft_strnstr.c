/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:40:48 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 22:30:52 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		compare1(const char *x, const char *y)
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

char			*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	len;
	char			*p;

	p = (char *)haystack;
	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return (p);
	while ((p[i]) && i < n)
	{
		if ((p[i] == *needle) && compare1(p + i, needle) && i + len <= n)
			return (p + i);
		i++;
	}
	return ((char *)NULL);
}
