/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:57:43 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 04:04:41 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper( int c ){
    if (c >= 'a' && c <= 'z')
        return (c-32);
    return c;
}

// int main(){
//     printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('A'));
//     printf("%c\n", ft_toupper('1'));
//     return 0;
// }