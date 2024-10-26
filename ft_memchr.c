
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
		int t[4] = {3,2,1,0};
	int	c;
		int *p;
	int	i;
		char k[] = "fallahi";
		char *str;

		c = 2;
		p = ft_memchr(t,c,6);
		i = 0;
		while(i < 3)
				printf("%d",p[i++]);
		str =ft_memchr(k, 'a',4);
		printf("%s\n",str);
}
*/
