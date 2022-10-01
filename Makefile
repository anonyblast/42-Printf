# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 17:44:05 by gusluiz-          #+#    #+#              #
#    Updated: 2022/10/01 23:22:24 by gusluiz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_hex.c \
		ft_itoa.c \
		ft_printf_utils.c \
		ft_printf.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_utoa.c 

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME =	libftprintf.a

all: $(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re:	fclean	all
