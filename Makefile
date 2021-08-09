# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 10:48:53 by cjulienn          #+#    #+#              #
#    Updated: 2021/08/06 15:39:58 by cjulienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ./srcs/conversions_1.c \
	./srcs/conversions_2.c \
	./srcs/ft_printf.c \
	./libft/ft_intlen_base.c \
	./libft/ft_lltoa.c \
	./libft/ft_putchar_fd.c \
	./libft/ft_putlnbr_fd.c \
	./libft/ft_putlnbr_base.c \
	./libft/ft_putstr_fd.c \
	./libft/ft_strlen.c

OBJS = ${SRCS:.c=.o}

INCLUDES_PATH = includes/*

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_PATH)

RM = rm -f

.c.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo libftprintf.a successfully made

all: $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

temp : all clean

.PHONY : all clean fclean re temp
