/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 17:09:19 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/16 17:09:26 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (!(tab = malloc(size * count)))
		return (0);
	while (i < (size * count))
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
