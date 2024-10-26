
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

// int main()
// {
//     int t[5] = {1, 2, 4, 2, 5};
//     int i;

//     ft_memset(t, 10, 4);

//     for (i = 0; i < 5; i++) {
//         printf("%d\n", t[i]);
//     }

//     return (0);
// }
