/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:36:21 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 14:12:44 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*list;

	if (lst)
	{
		while (*lst)
		{
			list = (*lst)->next;
			free(lst);
			(*lst) = list;
		}
	}
}
