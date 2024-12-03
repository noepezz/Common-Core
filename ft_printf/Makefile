# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npezzati <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 14:37:57 by npezzati          #+#    #+#              #
#    Updated: 2024/12/03 14:33:19 by npezzati         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = \
      ft_printf.c  ft_putchar.c  ft_putnbr.c	ft_putstr.c \
	ft_puthex.c   ft_putptr.c	ft_putunsigned.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rc $@ $?
%.o: %.c
	$(CC) $(CFLAGS) -c $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
