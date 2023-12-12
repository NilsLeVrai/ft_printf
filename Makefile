# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2023/12/12 13:53:59 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_PT1 = args_char.c \
			args_digit.c \
			args_lowerhexa.c \
			args_percent.c \
			args_pointer.c \
			args_string.c \
			args_unsigned.c \
			args_upperhexa.c \
			ft_printf.c \
			ft_putchar_fd_safe.c \
			ft_putnbr_base.c \
			ft_strlen.c

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
ARFLAGS = rcs

OBJ = $(FILES_PT1:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re