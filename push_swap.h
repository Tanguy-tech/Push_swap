/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:47:54 by Tanguy            #+#    #+#             */
/*   Updated: 2021/05/15 11:58:47 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define FAIL 0
#define SUCCESS 1
#define ERROR "Error\n"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

/* SRCS */
int	main(int ac, char **av);
void	handle_error(t_list *lst);

/* UTILS */
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_lstadd_back(t_list **alst, t_list *new);
t_list		*ft_lstnew(void *content);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_putchar(char c);
void		ft_putstr(char *s);
t_list		*ft_lstlast(t_list *lst);

#endif