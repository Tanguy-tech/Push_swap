/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:34:15 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 14:34:22 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	store_list(char **av, t_list *pile)
{
	int i;

	i = 1;
	while (av[i])
	{
		if (valid_args(av[i]))
			ft_lstadd_back(&pile, ft_lstnew(ft_atoi(av[i])));
		else
			handle_error(pile);
		i++;
	}
}
