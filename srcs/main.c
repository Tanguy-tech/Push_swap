/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:25:38 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 11:45:43 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*pile_a;

	i = 0;
	if (ac <= 1)
		handle_error(pile_a);
	while (av[i])
	{
		while (av[i][j])
		{
			if (av[i][j] == "-")
				j++;
			while (ft_isdigit(av[i][j]))
				j++;
		}
	}
	i = 0;
	while (av[i])
	{
		ft_lstaddback(&pile_a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
}