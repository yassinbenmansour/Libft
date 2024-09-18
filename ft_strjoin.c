/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:22:02 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/31 21:24:23 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	str3 = malloc(sizeof(char) * (len + 1));
	if (!str3)
		return (NULL);
	while (s1[i])
	{
		str3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str3[i] = s2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "my favorite thing is ";
	s2 = "profile ";
	s3 = "DIAL 7ARZAN";
	printf("%s\n",ft_strjoin(ft_strjoin(s1, s2), s3));
}
*/