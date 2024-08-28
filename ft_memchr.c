/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:04:13 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/28 18:57:09 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			z;
	unsigned char	*string;
	unsigned char	chr;

	string = (unsigned char *)s;
	chr = (unsigned char)c;
	z = 0;
	while (z < n)
	{
		if (*string == chr)
			return (string);
		string++;
		z++;
	}
	return (0);
}
/*
int main()
{
        int t[4] = {3,2,1,0};
        int c = 2;
        int *p;
        p = ft_memchr(t,c,6);
        int i = 0;
        while(i < 3)
                printf("%d",p[i++]);




        char k[] = "fallahi";
        char *str;
        str =ft_memchr(k, 'a',4);
        printf("%s\n",str);
}
*/
