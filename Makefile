# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carmas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 15:27:18 by carmas            #+#    #+#              #
#    Updated: 2023/06/30 16:46:02 by carmas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 

INCLUDE =

CC = 
RM =
AR = 
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}

clean:

fclean:

re: fclean all

.PHONY: all clean fclean re
