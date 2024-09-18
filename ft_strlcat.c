/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:26:07 by yabenman          #+#    #+#             */
/*   Updated: 2024/09/18 07:36:55 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	i;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendst)
		lensrc += dstsize;
	else
		lensrc += lendst;
	i = 0;
	while (src[i] != '\0' && lendst + 1 < dstsize)
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (lensrc);
}
/*
#include <stdio.h>

int main()
{
	    char s1[30] = "Dans cette premiere partie";
        char s2[10] = "fallahi";
        printf("len s1 %ld\n", ft_strlen(s1));
        printf("len s2 %ld\n", ft_strlen(s2));
        printf("%zu\n", ft_strlcat(s2, s1, 7));
}
*/
