/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenmans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:39:07 by ybenmans          #+#    #+#             */
/*   Updated: 2022/06/08 19:39:15 by ybenmans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int 	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int 	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int i);
int	ft_isdigit(int c);
int	ft_isprint(int c);
