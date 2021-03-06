/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:34:12 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/16 16:42:24 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error(t_list *lst)
{
	if (lst)
		ft_lstclear(&lst, free);
	ft_putstr(ERROR);
	exit (FAIL);
}
