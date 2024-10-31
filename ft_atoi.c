/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:45:47 by yabenman          #+#    #+#             */
/*   Updated: 2024/10/31 06:45:53 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("Test 1 : \"945\"\n");
// 	printf("atoi     : %d\n", atoi("945"));
// 	printf("ft_atoi  : %d\n", ft_atoi("945"));

// 	printf("Test 2 : \"   42\"\n");
// 	printf("atoi     : %d\n", atoi("   42"));
// 	printf("ft_atoi  : %d\n", ft_atoi("   42"));

// 	printf("Test 3 : \"\t\n\v\f\r  +214748\"\n");
// 	printf("atoi     : %d\n", atoi("\t\n\v\f\r  +214748"));
// 	printf("ft_atoi  : %d\n", ft_atoi("\t\n\v\f\r  +214748"));

// 	printf("Test 4 : \"-123\"\n");
// 	printf("atoi     : %d\n", atoi("-123"));
// 	printf("ft_atoi  : %d\n", ft_atoi("-123"));

// 	printf("Test 5 : \"+456\"\n");
// 	printf("atoi     : %d\n", atoi("+456"));
// 	printf("ft_atoi  : %d\n", ft_atoi("+456"));

// 	//  dépasse INT_MAX
// 	printf("Test 6 : \"2147483648\"\n");
// 	printf("atoi     : %d\n", atoi("2147483648"));
// 	printf("ft_atoi  : %d\n", ft_atoi("2147483648"));

// 	//  dépasse INT_MIN
// 	printf("Test 7 : \"-2147483649\"\n");
// 	printf("atoi     : %d\n", atoi("-2147483649"));
// 	printf("ft_atoi  : %d\n", ft_atoi("-2147483649"));

// 	// Cas sans chiffre
// 	printf("Test 8 : \"Hello\"\n");
// 	printf("atoi     : %d\n", atoi("Hello"));
// 	printf("ft_atoi  : %d\n", ft_atoi("Hello"));

// 	// Cas mixte avec caractères alphanumériques
// 	printf("Test 9 : \"42abc\"\n");
// 	printf("atoi     : %d\n", atoi("42abc"));
// 	printf("ft_atoi  : %d\n", ft_atoi("42abc"));

//      printf("%d\n", atoi("-9223372036854775809"));
//      printf("%d\n", ft_atoi("-9223372036854775809"));

// 	return (0);
// }
