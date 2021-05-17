/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:44:25 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/17 12:44:34 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstsize(t_list *lst)
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
	if (list->next == NULL)
		i++;
	return (i);
}
