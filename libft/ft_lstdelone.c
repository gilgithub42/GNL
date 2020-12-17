/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:43:16 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/04 12:43:21 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (del != NULL)
	{
		ptr = *alst;
		if (ptr == NULL)
			return ;
		del(ptr->content, ptr->content_size);
		free(ptr);
		*alst = NULL;
	}
}
