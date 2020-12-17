/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:43:40 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/04 12:43:47 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*start;
	t_list	*last;

	start = NULL;
	while (lst)
	{
		res = f(lst);
		if (start == NULL)
			start = res;
		else
			last->next = res;
		last = res;
		lst = lst->next;
	}
	return (start);
}
