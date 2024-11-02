/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:46:01 by yabenman          #+#    #+#             */
/*   Updated: 2024/11/01 23:26:38 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

// int main()
// {
//      int t[4] = { 5, 4, 3, 2};
//      ft_bzero(NULL,6);
//      int i = 0;
//      while(i < 4)
//      printf("%d\n",t[i++]);
// }
