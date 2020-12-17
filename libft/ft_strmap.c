/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:22:23 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/20 16:25:40 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n;
	char	*s1;
	int		i;

	if (!s)
		return (0);
	n = ft_strlen(s);
	s1 = ft_strnew(n);
	if (s1 == (char *)NULL)
		return (s1);
	i = 0;
	while (*s)
	{
		s1[i] = f(*s);
		s++;
		i++;
	}
	return (s1);
}
