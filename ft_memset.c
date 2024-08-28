/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:09:02 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/28 18:58:19 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*s;

	a = 0;
	s = (unsigned char *) b;
	while (a < len)
	{
		s[a] = c;
		a++;
	}
	return (b);
}
/*
int main()
{
	    int t[5] = {1,2,4,2,5};
        int *r;
        r = ft_memset(t,10,4);
        int i = 0;
        while (i < 5)
        {
                printf("%d\n",r[i]);
                i++;
        }

    char str[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 4*sizeof(char));

    printf("After memset():  %s\n", str);

    char str1[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str1);
}
*/
