# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:22:49 by jde-melo          #+#    #+#              #
#    Updated: 2021/12/16 13:25:38 by jde-melo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libftprintf.a


SRCS	= ft_printf.c \
		  ft_putnbr_base.c \
		  ft_putunbr_base.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_strchr.c \
		  ft_strlen.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)
.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
