# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 12:18:50 by cjulienn          #+#    #+#              #
#    Updated: 2021/07/16 15:53:54 by cjulienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_intlen_base.c \
	  ./ft_lltoa.c \
	  ./ft_putchar_fd.c \
	  ./ft_putlnbr_fd.c \
	  ./ft_putstr_fd.c \
	  ./ft_strlen.c \
	  ./ft_putlnbr_base.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

RM = rm -f

NAME = libft.a

AR = ar -rcs
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

all:	
	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean re
