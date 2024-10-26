
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = len;
	if (!src && !dst)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char str[] = "Hello, world!";
// 	printf("%s \n", str);
// 	ft_memmove(str, str+7,6);
// 	printf("%s \n", str);
// 	ft_memmove(str+2, str+7,6);
// 	printf("%s \n", str);
// 	return (0);
// }
