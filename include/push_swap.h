/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:47:54 by Tanguy            #+#    #+#             */
/*   Updated: 2021/05/17 16:47:02 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define FAIL 0
# define SUCCESS 1
# define ERROR "Error\n"
# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

typedef struct	s_data
{
	int		interger;
	int		rank;
}				t_data;

typedef struct s_list
{
	t_data			*content;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

/* SRCS */
int			main(int ac, char **av);
void		handle_error(t_list *lst);
int			valid_args(char *av);
int			store_list(char **av, t_list *pile);
int			check_duplicate(long int tmp, t_list *list);
void		clear_mem(t_list *pile);

/* UTILS */
long int	ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
t_list		*ft_lstnew(t_list *pile, long int num, int count);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_putchar(char c);
void		ft_putstr(char *s);
t_list		*ft_lstlast(t_list *lst);
void		*ft_calloc(size_t count, size_t size);
void		ft_swap(int a, int b);
int			ft_lstsize(t_list *lst);
void		ft_sort_int_tab(int *tab, int size);

#endif