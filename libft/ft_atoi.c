/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:31:09 by gigregoi          #+#    #+#             */
/*   Updated: 2020/08/29 13:52:42 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_signe(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static int		my_isspace(unsigned char c)
{
	int				kval;
	const char		tab_isspace[] = {'\t', '\n', '\v', '\f', '\r', ' '};

	kval = 0;
	while (kval < 6)
	{
		if (c == tab_isspace[kval])
			return (1);
		kval++;
	}
	return (0);
}

static int		conversion(double nbr)
{
	double			int_max;

	int_max = 9223372036854775807.;
	if (nbr >= int_max)
		return (-1);
	if (nbr <= (int_max + 1.) * -1.)
		return (0);
	return (int)(nbr);
}

int				ft_atoi(const char *str)
{
	unsigned long	i;
	int				sgn;
	double			nbr;

	i = 0;
	nbr = 0;
	while (str[i] != '\0' && my_isspace(str[i]))
		i++;
	sgn = 1;
	if ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		sgn = sgn * ft_signe(str[i]);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' & str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (conversion(sgn * nbr));
}
