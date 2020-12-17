/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigregoi <gigregoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:42:56 by gigregoi          #+#    #+#             */
/*   Updated: 2020/09/04 12:43:07 by gigregoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*next;

	ptr = *alst;
	if (ptr == NULL)
		return ;
	while (ptr != NULL)
	{
		next = ptr->next;
		ft_lstdelone(&ptr, del);
		ptr = next;
	}
	*alst = NULL;
}
