/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:20:05 by yabenman          #+#    #+#             */
/*   Updated: 2024/09/18 18:42:58 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	size = (int)strlen(s);
	while (i <= size)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s1[20] = "yassine";
// 	char c = 's';
// 	char *result;

// 	result = ft_strchr(s1, c);
// 	if (result != NULL)
// 		printf("Character '%c' found at position: %ld\n", c, result - s1);
// 	else
// 		printf("Character '%c' not found\n", c);

// 	return (0);
// }
