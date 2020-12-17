/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:14:49 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 16:20:46 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;
	unsigned char	car;

	car = c;
	if (n == 0)
		return ((void *)NULL);
	src = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		if (!(*src) && car)
			return ((void *)NULL);
		if (*src == car)
			return ((void *)src);
		i++;
		src++;
	}
	return ((void *)NULL);
}
