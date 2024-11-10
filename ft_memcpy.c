/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:47:05 by yabenman          #+#    #+#             */
/*   Updated: 2024/11/03 05:02:05 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	int	a;
// 	int	b;
// 	int	*s;
// 	s = ft_memcpy("helo", "helo", sizeof(char) * 4);
// 	printf("%s\n", s);
// 	s = memcpy("helo", "helo", sizeof(char) * 4);
// 	printf("%s\n", s);
// 	return (0);
// }
