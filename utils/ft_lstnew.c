/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:33:28 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 15:59:20 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_content;

	new_content = malloc(sizeof(t_list));
	if (!(new_content))
		return (0);
	new_content->content = content;
	new_content->next = NULL;
	return (new_content);
}
