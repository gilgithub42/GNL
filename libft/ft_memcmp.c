/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:36:32 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 16:53:33 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t					i;
	const unsigned char		*strcmp1;
	const unsigned char		*strcmp2;

	strcmp1 = (unsigned char*)str1;
	strcmp2 = (unsigned char*)str2;
	i = 0;
	while (i < n)
	{
		if (*strcmp1 != *strcmp2)
			return ((int)(*strcmp1 - *strcmp2));
		i++;
		strcmp1++;
		strcmp2++;
	}
	return (0);
}
