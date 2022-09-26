#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			z;
	unsigned char	*string;
	unsigned char	chr;

	string = (unsigned char *)str;
	chr = (unsigned char)c;
	z = 0;
	while (z < n)
	{
		if (*string == chr)
			return ((void *)string);
		string++;
		z++;
	}
	return (0);
}
