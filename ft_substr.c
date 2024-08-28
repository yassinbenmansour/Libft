/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:58:56 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/28 19:00:55 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	s_len = len;
	if (!s)
		return (NULL);
	if (s_len > ft_strlen(s))
	{
		substring = (char *)malloc((unsigned int) ft_strlen(s) + 1);
		s_len = ft_strlen(s) - start;
	}
	else
		substring = (char *)malloc(s_len + 1);
	if (!substring)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substring[0] = '\0';
		return (substring);
	}
	ft_memcpy(substring, s + start, s_len);
	substring[s_len] = '\0';
	return (substring);
}
/*
#include <stdio.h>

int main()
{
	char	*str = "i just want this part #############";
        
	char	*ret = ft_substr(str, 0, 22);
        printf("%s. \n",ret);
}
*/
