/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:46:46 by yabenman          #+#    #+#             */
/*   Updated: 2024/11/01 01:50:41 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int t[4] = {3,2,1,0};
	int	c;
	int *p;
	int	i;
	char k[] = "yassine";
	char *str;

	c = 2;
	p = ft_memchr(t,c,6);
	i = 0;
	while(i < 3)
		printf("%d",p[i++]);
	str =ft_memchr(k, 'a',4);
	printf("%s\n",str);
}
*/
