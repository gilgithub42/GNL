/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:16:12 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 22:37:15 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	l;
	size_t	i;

	if (!s)
		return ;
	l = ft_strlen(s);
	i = 0;
	while (i < l)
	{
		f(i, &s[i]);
		i++;
	}
}
