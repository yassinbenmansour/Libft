/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:47:57 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/21 17:50:29 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= dstsize)
		lensrc += dstsize;
	else
		lensrc += lendst;
	i = 0;
	while (src[i] && lensrc + 1 < dstsize)
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (lensrc);
}

// int main (){
//     char dst[10] = "Hello";
//     char src[10] = "World";
//     printf("%ld\n", ft_strlcat(dst, src, 2));
//     printf("%s\n",dst);
//     return (0);
// }
