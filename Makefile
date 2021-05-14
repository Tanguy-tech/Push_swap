# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tanguy <Tanguy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 10:28:33 by Tanguy            #+#    #+#              #
#    Updated: 2021/05/14 10:47:33 by Tanguy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ERASE       =   \033[2K\r
GREY        =   \033[30m
RED         =   \033[31m
GREEN       =   \033[32m
YELLOW      =   \033[33m
BLUE        =   \033[34m
PINK        =   \033[35m
CYAN        =   \033[36m
WHITE       =   \033[37m
BOLD        =   \033[1m
UNDER       =   \033[4m
SUR         =   \033[7m
END         =   \033[0m

NAME = push_swap

HEADER = push_swap.h

UTILS = 

OBJS_UTILS = $(addprefix ./utils/, $(UTILS:.c=.o))

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

clean:		@RM $(OBJS_UTILS)

fclean:		clean
			@printf "$(ERASE)$(RED)All files .o cleaned$(END)\n"

re:			fclean all

.PHONY:		all fclean clean re