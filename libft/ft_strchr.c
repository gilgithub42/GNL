/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:16:22 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/20 17:05:27 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*p;

	len = ft_strlen(str);
	i = 0;
	p = (char *)str;
	while (i <= len)
	{
		if (*p == (char)c)
			return (p);
		i++;
		p++;
	}
	return ((char *)NULL);
}
