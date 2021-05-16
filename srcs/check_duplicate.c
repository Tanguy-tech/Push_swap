/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 15:43:33 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/16 17:15:10 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(long int tmp, t_list *list)
{
	while (list)
	{
		if (tmp == list->content->interger)
			return (0);
		list = list->next;
	}
	return (1);
}
