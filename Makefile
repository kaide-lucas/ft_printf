# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 12:41:17 by codespace         #+#    #+#              #
#    Updated: 2025/08/26 15:07:43 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re