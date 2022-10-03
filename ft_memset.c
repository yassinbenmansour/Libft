#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			z;
	unsigned char	*p;

	z = 0;
	p = (unsigned char *)dest;
	while (z < count)
	{
		p[z++] = c;
	}
	return ((void *)dest);
}
