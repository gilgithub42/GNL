/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:44:59 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/05 20:47:41 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*p;

	len = ft_strlen(str);
	i = len;
	p = (char *)&str[len];
	while (i >= 0)
	{
		if (*p == (char)c)
			return (p);
		i--;
		p--;
	}
	return ((char *)NULL);
}
