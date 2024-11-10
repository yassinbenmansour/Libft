/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:48:41 by yabenman          #+#    #+#             */
/*   Updated: 2024/11/02 04:02:46 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = -1;
	if (!s || !f)
		return ;
	while (s[++index] != '\0')
		(*f)(index, &s[index]);
}

// void f1(unsigned int index, char *c)
// {
//     *c = *c + 1;
// }

// int main()
// {
//     char str[] = "abcd";
//     ft_striteri(str, f1);
//     printf("%s\n", str);
//     return 0;
// }
