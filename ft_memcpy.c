
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*s;

// 	b = 513;
// 	s = ft_memcpy(&a, &b, sizeof(char) * 4);
// 	printf("%d\n", *s);
// 	return (0);
// }
