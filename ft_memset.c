/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:02:45 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/27 01:52:03 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*s;

	a = 0;
	s = (unsigned char *)b;
	while (a < len)
	{
		s[a] = c;
		a++;
	}
	return (b);
}

// int main(void)
// {
//     char buffer[10];  // Création d'un tableau de 10 octets

//
// Appel de ft_memset pour remplir le tableau avec la valeur 0x41 ('A' en ASCII)
//     ft_memset(buffer, 0x41, sizeof(buffer));

//     // Affichage des valeurs du tableau
//     printf("Contenu du buffer après memset : ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%c ", buffer[i]);
// Chaque valeur sera affichée comme un caractère
//     }
//     printf("\n");

//     return (0);
// }
