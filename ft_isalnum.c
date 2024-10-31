/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:46:20 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:52:50 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isalnum('5'));
    printf("%d\n",ft_isalnum('H'));
    printf("%d\n",ft_isalnum('&'));
    printf("%d\n",ft_isalnum(200));
    printf("%d\n",ft_isalnum(0));
}
*/
