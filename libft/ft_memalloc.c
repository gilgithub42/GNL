/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:42:41 by gigregoi          #+#    #+#             */
/*   Updated: 2020/03/04 18:41:44 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == (char *)NULL)
		return ((void *)NULL);
	ft_bzero(ptr, size);
	return ((void *)ptr);
}
