#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	d = (char *)str1;
	s = (char *)str2;
	i = 0;
	if (!s && !d)
	{
		return (NULL);
	}
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)str1);
}
