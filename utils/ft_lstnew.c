/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:33:28 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/17 13:51:37 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*init_data(t_list *pile)
{
	t_data	*new_data;

	new_data = ft_calloc(sizeof(t_data), 1);
	if (!(new_data))
		handle_error(pile);
	return (new_data);
}

t_list	*ft_lstnew(t_list *pile, long int num, int i)
{
	t_list	*new_elem;
	t_data	*data;

	new_elem = malloc(sizeof(t_list));
	data = init_data(pile);
	if (!(new_elem))
		return (0);
	new_elem->content = data;
	new_elem->content->interger = num;
	new_elem->content->rank = i;
	new_elem->next = NULL;
	return (new_elem);
}
