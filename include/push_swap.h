/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:47:54 by Tanguy            #+#    #+#             */
/*   Updated: 2021/05/15 16:09:23 by tbillon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define FAIL 0
# define SUCCESS 1
# define ERROR "Error\n"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

/* SRCS */
int			main(int ac, char **av);
int			handle_error(t_list *lst);
int			valid_args(char *av);
int			store_list(char **av, t_list *pile);
int			check_duplicate(long int tmp, t_list *list);

/* UTILS */
long int	ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_lstadd_back(t_list **alst, t_list *new);
t_list		*ft_lstnew(int content);
void		ft_lstclear(t_list **lst);
void		ft_putchar(char c);
void		ft_putstr(char *s);
t_list		*ft_lstlast(t_list *lst);

#endif