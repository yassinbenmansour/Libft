/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:54:43 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/28 18:55:42 by yabenman         ###   ########.fr       */
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
