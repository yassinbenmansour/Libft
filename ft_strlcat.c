/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:47:57 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/21 20:43:18 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lndst;
	size_t	i;
	size_t	len;

	lndst = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lndst)
		len += dstsize;
	else
		len += lndst;
	i = 0;
	while (src[i] != '\0' && lndst + 1 < dstsize)
	{
		dst[lndst] = src[i];
		lndst++;
		i++;
	}
	dst[lndst] = '\0';
	return (len);
}

// int main (){
//     char dst[10] = "Hello";
//     char src[10] = "World";
//     printf("%ld\n", ft_strlcat(dst, src, 2));
//     printf("%s\n",dst);
//     return (0);
// }
