/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:41:23 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/18 14:31:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if ((!s1 & !s2))
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	len = ft_strlen(s1);
	if (len != ft_strlen(s2))
		return (0);
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
