/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:02:46 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/20 17:03:48 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;

	i = 0;
	if (ft_strlen(src) < nb)
	{
		while (dest[i])
			i++;
		j = -1;
		while (src[++j] && j < nb)
			dest[i + j] = src[j];
		dest[i + j] = '\0';
		return (dest);
	}
	ldest = ft_strlen(dest);
	ft_memcpy(&dest[ldest], src, nb);
	dest[ldest + nb] = 0;
	return (dest);
}
