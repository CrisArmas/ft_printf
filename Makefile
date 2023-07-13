# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carmas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 15:27:18 by carmas            #+#    #+#              #
#    Updated: 2023/07/11 17:58:37 by carmas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printf_utils.c

OBJT = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJT)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
