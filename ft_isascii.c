/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:31:55 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 03:38:34 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii( int c ){
    if(c >= 0 && c <= 127)
        return 1;
    return 0;
}

// int main(){
//     printf("%d\n", ft_isascii(65));
//     printf("%d\n", ft_isascii(128));
//     printf("%d\n", ft_isascii(-5));
//     printf("%d\n", ft_isascii('-'));
//     return 0;
// }