# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2023/12/05 16:45:05 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = args_char.c \
		args_string.c \
		ft_printf.c \

NAME = libftprintf.a
LIBFT_MAKEFILE = $(MAKE) -C ./libft
LIBFT = ./libft/libft.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
ARFLAGS = rcs

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(LIBFT):
	$(LIBFT_MAKEFILE)

$(NAME): $(OBJ) | $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)
	$(LIBFT_MAKEFILE) clean
	
fclean: clean all
	rm -f $(NAME) $(OBJ)
	$(LIBFT_MAKEFILE) fclean
	
re: fclean all
	$(LIBFT_MAKEFILE) re

.PHONY: all clean fclean re
