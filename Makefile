# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndelhomm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/04 10:39:52 by ndelhomm          #+#    #+#              #
#    Updated: 2019/03/04 10:47:25 by ndelhomm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_printf

HEADER		= ft_printf.h

SRC			= 	testlib_decimal.c\
				decimal_manager.c\
				main.c\
				ft_itoa_base.c\
				hexa_manager.c\
				octal_manager.c\
				

OBJ			= $(SRC:%.c=%.o)

#FLAGS		= -Wall -Wextra -Werror 

all: $(NAME)

$(NAME) : $(OBJ)
	cd libft && make
	cd libft && make clean
	gcc $(OBJ) -L libft/ -lft -o $(NAME)

%.o: %.c
	gcc -I $(HEADER) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)
	cd libft/ && make clean

fclean	: clean
	/bin/rm -f $(NAME)
	cd libft/ && make fclean

re		: fclean all

.PHONY	: all clean fclean re
