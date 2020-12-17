/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:10:00 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/06 18:30:49 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dest, const void *restrict src, \
		int c, size_t n)
{
	unsigned int	i;
	unsigned char	car;

	i = 0;
	car = (unsigned char)c;
	while (i < n)
	{
		if (*(unsigned char *)(src + i) != car)
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		else
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			return (dest + i + 1);
		}
		i++;
	}
	return ((void *)0);
}
