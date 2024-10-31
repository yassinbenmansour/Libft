/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:46:34 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:52:42 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isdigit('5'));
    printf("%d\n",ft_isdigit('H'));
    printf("%d\n",ft_isdigit('&'));
    printf("%d\n",ft_isdigit(200));
    printf("%d\n",ft_isdigit(0));
}
*/
