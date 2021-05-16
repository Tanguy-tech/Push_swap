/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:25:38 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/16 16:42:41 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_list	*pile_a;

	i = 0;
	pile_a = NULL;
	if (ac <= 1)
		handle_error(pile_a);
	if (!store_list(av, pile_a))
		handle_error(pile_a);
}
