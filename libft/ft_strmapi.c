/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:26:32 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/20 16:50:01 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			n;
	char			*s1;
	unsigned int	i;

	if (!s)
		return (0);
	n = ft_strlen(s);
	s1 = ft_strnew(n);
	if (s1 == (char *)NULL)
		return (s1);
	i = 0;
	while (s[i])
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
