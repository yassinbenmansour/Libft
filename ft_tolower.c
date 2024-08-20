/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:57:45 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 04:04:18 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main(){
//     printf("%c\n", ft_tolower('A'));
//     printf("%c\n", ft_tolower('a'));
//     printf("%c\n", ft_tolower('Z'));
//     printf("%c\n", ft_tolower('z'));
//     printf("%c\n", ft_tolower('1'));
//     return (0);
// }
