/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:34:15 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/16 17:39:17 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	store_list(char **av, t_list *pile)
{
	int			i;
	long int	tmp;

	i = 1;
	while (av[i])
	{
		if (valid_args(av[i]))
		{
			tmp = ft_atoi(av[i]);
			if (!(tmp > 2147483647 || tmp < -2147483648)
				&& check_duplicate(tmp, pile))
				ft_lstadd_back(&pile, ft_lstnew(pile, tmp, i));
			else
				return (FAIL);
		}
		else
			return (FAIL);
		i++;
	}
	return (1);
}
