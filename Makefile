# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 06:50:23 by yabenman          #+#    #+#              #
#    Updated: 2024/11/02 22:30:16 by yabenman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -rf
INC = libft.h								
SRC =		ft_isalpha.c\
	 		ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_strlen.c\
			ft_memcpy.c\
			ft_strdup.c\
			ft_toupper.c\
			ft_bzero.c\
			ft_memchr.c\
			ft_memmove.c\
			ft_strlcat.c\
			ft_strrchr.c\
			ft_memcmp.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_atoi.c\
			ft_strtrim.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_calloc.c\
			ft_strjoin.c\
			ft_split.c\
			ft_itoa.c\
			ft_putnbr_fd.c\
			ft_striteri.c\
			ft_strncmp.c\
			ft_strmapi.c\


OBJ = $(SRC:%.c=%.o)


all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o : %.c $(INC)													
		cc -c $(CFLAGS) $< -o $@

clean :
		@rm -rf  $(OBJ)

fclean :
		@rm -f $(NAME)  $(OBJ)

re : fclean all

.PHONY: all clean fclean re
