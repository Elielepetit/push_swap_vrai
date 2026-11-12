# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/31 18:58:37 by sataide           #+#    #+#              #
#    Updated: 2026/11/03 00:44:39 by sataide          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPIL = cc -Wall -Werror -Wextra -g
SOURCES = ft_printf.c \
ft_putchar.c \
ft_puthexalow.c \
ft_puthexaupp.c \
ft_putnbr.c \
ft_putstr.c \
ft_putunsint.c \
ft_putvoid.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libftprintf.a
REMOVE = rm -fr

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(COMPIL) -c $< -o $@

.PHONY: all clean fclean re

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all