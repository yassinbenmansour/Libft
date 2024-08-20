/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 03:26:51 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/20 03:38:45 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c){
    if(ft_isalpha(c) || ft_isdigit(c))
        return 1;
    return 0;
}

// int main(){
//     printf("%d\n", ft_isalnum('a'));
//     printf("%d\n", ft_isalnum('1'));
//     printf("%d\n", ft_isalnum('A'));
//     printf("%d\n", ft_isalnum('!'));
//     return 0;
// }