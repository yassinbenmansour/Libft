/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:27:06 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 03:39:04 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main(){
//      printf("%d\n", ft_isdigit(5));
//      printf("%d\n", ft_isdigit('5'));
//      printf("%d\n", ft_isdigit('a'));
//      printf("%d\n", ft_isdigit('A'));

//      return (0);
// }
