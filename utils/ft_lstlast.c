/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:58:08 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 11:58:15 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*list;

	i = 0;
	list = lst;
	if (!lst)
		return (0);
	while (list->next != NULL)
	{
		i++;
		list = list->next;
	}
	return (list);
}
