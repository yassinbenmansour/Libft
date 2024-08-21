# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 03:27:23 by yabenman          #+#    #+#              #
#    Updated: 2024/08/21 23:55:44 by yabenman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf 
INC = libft.h
SRC =		ft_isalnum.c\
			ft_isdigit.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strlen.c\
			ft_atoi.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strncmp.c\
			ft_strrchr.c\
			ft_strchr.c\

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c $(INC)
	gcc -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ)

fclean :
	@rm -rf $(NAME) $(OBJ)
	
re : fclean all