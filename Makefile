# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 03:27:23 by yabenman          #+#    #+#              #
#    Updated: 2024/08/20 03:45:06 by yabenman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf 
INC = libft.h
SRC =		ft_isalnum\
			ft_isdigit\
			ft_isalpha\
			ft_isascii\
			ft_isprint\
	