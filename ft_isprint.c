/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:40:02 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 03:44:24 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(){
//     printf("%d \n", ft_isprint('A'));
//     printf("%d \n", ft_isprint('a'));
//     printf("%d \n", ft_isprint('1'));
//     printf("%d \n", ft_isprint('\n'));
//     printf("%d \n", ft_isprint('\t'));
//     printf("%d \n", ft_isprint('\0'));
//     return (0);
// }
