/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:44:24 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/04 12:45:11 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*m;

	m = (t_list*)malloc(sizeof(t_list));
	if (m == NULL)
		return (NULL);
	m->next = NULL;
	m->content = NULL;
	m->content_size = 0;
	if (content != NULL)
	{
		m->content = (void *)malloc(content_size);
		if (m->content == NULL)
		{
			free(m);
			return (NULL);
		}
		ft_memcpy(m->content, content, content_size);
		m->content_size = content_size;
	}
	return (m);
}
