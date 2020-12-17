/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:46:42 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 14:40:40 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long int	i;
	unsigned char		*strempo;

	if (!dst && !src && len)
		return (dst);
	strempo = (unsigned char *)malloc(sizeof(unsigned char ) * len);
	i = 0;
	if (strempo == (unsigned char *)NULL)
		return (ft_memcpy(dst, src, len));
	ft_memcpy(strempo, src, len);
	while (i < len)
	{
		*(unsigned char*)(dst + i) = strempo[i];
		i++;
	}
	free(strempo);
	return (dst);
}
