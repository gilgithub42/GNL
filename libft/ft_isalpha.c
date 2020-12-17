/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:38:12 by gigregoi          #+#    #+#             */
/*   Updated: 2020/03/04 19:05:27 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int ch)
{
	if ((ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}

static char	ft_islower(int ch)
{
	if ((ch >= 'a') && (ch <= 'z'))
		return (1);
	return (0);
}

int			ft_isalpha(int ch)
{
	if (ft_islower(ch) || ft_isupper(ch))
		return (1);
	return (0);
}
