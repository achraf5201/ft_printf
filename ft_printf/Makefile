# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bala <ael-bala@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 20:16:12 by ael-bala          #+#    #+#              #
#    Updated: 2025/11/06 20:16:16 by ael-bala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SRC		= ft_count_digit.c ft_print_int.c ft_print_unsigned_int.c ft_putstr.c \
		  ft_printf.c ft_print_hex.c ft_print_ptr.c ft_putchar.c
OBJ		= $(SRC:.c=.o)
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
AR		= ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
