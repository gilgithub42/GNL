/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:47:38 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/24 22:41:17 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_pos(int len, long n)
{
	char	*s;
	int		i;

	i = 0;
	if (!(s = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		s[len - i - 1] = n % 10 + '0';
		n = (n - n % 10) / 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char		*ft_itoa(int n)
{
	int		len;
	long	n_lon;
	long	n_len;
	char	*s;
	char	*sgn;

	n_lon = n;
	sgn = "";
	len = 1;
	if (n_lon < 0)
	{
		sgn = "-";
		n_lon = n_lon * -1;
	}
	n_len = n_lon;
	while (n_len >= 10)
	{
		n_len = n_len / 10;
		len += 1;
	}
	s = ft_strjoin(sgn, itoa_pos(len, n_lon));
	return (s);
}
