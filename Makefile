# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-melo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:22:49 by jde-melo          #+#    #+#              #
#    Updated: 2021/12/20 05:30:02 by jde-melo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDRS	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libftprintf.a


SRCS	= src/ft_printf.c \
		  utils/ft_putnbr_base.c \
		  utils/ft_putunbr_base.c \
		  utils/ft_putchar.c \
		  utils/ft_putstr.c \
		  utils/ft_strchr.c \
		  utils/ft_strlen.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)
.c.o:
			$(CC) $(CFLAGS) -I $(HDRS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
