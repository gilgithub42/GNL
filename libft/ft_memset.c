/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:46:37 by gigregoi          #+#    #+#             */
/*   Updated: 2019/12/06 20:56:03 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	car;
	char			*str;

	car = '\0' + c;
	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = car;
		i++;
	}
	return (b);
}
