/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:47:38 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/18 20:26:03 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cartrim(unsigned char c)
{
	int				i;
	const char		tab[] = {'\t', '\n', ' '};

	i = 0;
	while (i < 3)
	{
		if (c == tab[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	size_t			len;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	while (cartrim(s[i]))
		i++;
	if (i != len)
	{
		j = len - 1;
		while (cartrim(s[j]))
			j--;
		str = ft_strnew(j - i);
		if (str == (char *)NULL)
			return (str);
		str = ft_strsub(s, i, j - i + 1);
		return (str);
	}
	else
		return ("\0");
}
