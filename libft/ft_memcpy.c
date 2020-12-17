/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:42:10 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/06 20:39:10 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;
	char			*origdest;

	if (!src && !dst && n)
		return (dst);
	if (!src && !dst)
		return (((void *)0));
	i = 0;
	origdest = (char *)dst;
	while (i < n)
	{
		origdest[i] = *(char *)(dst + i);
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (origdest);
}
