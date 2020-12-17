/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:39:12 by gigregoi          #+#    #+#             */
/*   Updated: 2020/02/20 18:31:15 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	car1;
	unsigned char	car2;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') \
			&& (s2[i] != '\0') && (i < n - 1))
		i++;
	car1 = s1[i];
	car2 = s2[i];
	return (car1 - car2);
}
