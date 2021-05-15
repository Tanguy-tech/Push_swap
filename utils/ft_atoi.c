/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:30:44 by tbillon           #+#    #+#             */
/*   Updated: 2021/05/15 16:06:47 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	unsigned char	*str_;
	int				i;
	long int		neg;
	long int		res;

	i = 0;
	neg = 0;
	res = 0;
	str_ = (unsigned char *)str;
	while ((str_[i] >= 9 && str_[i] <= 13) || (str_[i] == 32))
		i++;
	if (str_[i] == '-' || str_[i] == '+')
		if (str_[i++] == '-')
			neg++;
	while (str_[i] >= 48 && str_[i] <= 57)
		res = res * 10 + (str_[i++] - 48);
	if (neg % 2 == 1)
		res = res * -1;
	return (res);
}
