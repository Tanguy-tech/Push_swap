/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:34:15 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 15:43:00 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	store_list(char **av, t_list *pile)
{
	int 		i;
	long int	tmp;

	i = 1;
	while (av[i])
	{
		if (valid_args(av[i]))
		{
			tmp = ft_atoi(av[i]);
			if (!(tmp > 2147483647 || tmp < -2147483648)
                && check_duplicate(tmp, pile))
                ft_lstadd_back(&pile, ft_lstnew(tmp));
            else
                handle_error(pile); 
        }
    }
}
