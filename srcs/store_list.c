/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:34:15 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/17 16:55:44 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_rank(t_list *pile)
{
	int		tab[ft_lstsize(pile)];
	t_list *tmp;
	int		i;
	int		j;

	i = 0;
	tmp = pile;
	while (tmp)
	{
		tab[i] = tmp->content->interger;
		i++;
		tmp = tmp->next;
	}
	tab[i] = 0;
	ft_sort_int_tab(tab, ft_lstsize(pile));
	tmp = pile;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tmp->content->interger == tab[j])
				tmp->content->rank = j;
			j++;
		}
		i++;
		tmp = tmp->next;
	}
}

int	store_list(char **av, t_list *pile)
{
	int			i;
	long int	tmp;

	i = 1;
	pile = NULL;
	while (av[i])
	{
		if (valid_args(av[i]))
		{
			tmp = ft_atoi(av[i]);
			if (!(tmp > INT32_MAX || tmp < INT32_MIN)
				&& check_duplicate(tmp, pile))
					ft_lstadd_back(&pile, ft_lstnew(pile, tmp, i));
			else
				return (FAIL);
		}
		else
			return (FAIL);
		i++;
	}
	sort_rank(pile);
	clear_mem(pile);
	return (1);
}
