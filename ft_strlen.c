/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:12:35 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 22:24:57 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}

// int main() {
//     const char *str = "Hello world";

//     printf("%zu\n", ft_strlen(str));
//     printf("%zu\n", ft_strlen("\0"));
//     printf("%zu\n", ft_strlen(""));

//     return (0);
//}
