/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:41:23 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/05 20:22:12 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	size_t			len1;
	size_t			len2;

	i = 0;
	if (!s1 & !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 < n || len2 < n)
		return (ft_strequ(s1, s2));
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
