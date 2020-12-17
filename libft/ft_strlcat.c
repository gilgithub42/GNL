/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:02:46 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/05 22:11:36 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lsrc;
	size_t	ldest;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	if (size >= (lsrc + ldest + 1))
	{
		ft_strcat(dest, src);
	}
	else
	{
		if (size == (ldest + 1))
			return (lsrc + ldest);
		if (size > (ldest + 1))
		{
			ft_strncat(dest, src, size - ldest - 1);
			dest[lsrc + ldest + 1] = 0;
		}
		else
			return (lsrc + size);
	}
	return (lsrc + ldest);
}
