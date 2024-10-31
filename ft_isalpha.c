/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:46:25 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:52:47 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
int main ()
{
	printf("%d\n",ft_isalpha('5'));
    printf("%d\n",ft_isalpha('H'));
    printf("%d\n",ft_isalpha('&'));
    printf("%d\n",ft_isalpha('b'));
    printf("%d\n",ft_isalpha(0));
}
*/
