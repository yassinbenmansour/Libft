/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:47:08 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:52:21 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = len;
	if (d == s)
		return (dst);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *str = "Hello, world!";
// 	printf("%s \n", ft_memmove(NULL, "ABC", 6));
// 	printf("%s \n",memmove(NULL, "ABC", 6));

// 	return (0);
// }
