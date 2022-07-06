# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbyrd <nbyrd>                              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 13:40:18 by nbyrd             #+#    #+#              #
#    Updated: 2022/07/06 17:23:54 by nbyrd            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIST = ft_pointer.c ft_printf.c \
	   ft_putstr_fd.c ft_flag.c ft_string.c \
	   ft_hex.c ft_putchar_fd.c ft_strlen.c \
	   ft_int.c ft_putnbr_fd.c ft_unsigned_decimal.c \
	   ft_parse.c ft_putnbr_pointer.c \

MAIN = main.c
OUT = test
OBJ = $(patsubst %.c,%.o,$(LIST))

CFLAGS = -Wall -Wextra -Werror

GCC = gcc

INC = ft_printf.h


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?
%.o : %.c $(INC)
	$(GCC) $(CFLAGS) -c $< -o $@ 
clean :
	@rm -f $(OBJ)
fclean : clean
	@rm -f $(NAME)
	@rm -f $(OUT)

test : all
	$(GCC) $(MAIN) $(NAME) -o $(OUT)
re : fclean all
.PHONY : all clean fclean re
