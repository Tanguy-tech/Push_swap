/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 15:43:33 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 15:43:40 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_duplicate(long int temp, t_list *list)
{
    while (list)
    {
        if (temp == (long int)list->content)
            return (0);
        list = list->next;
    }
    return (1);
}
