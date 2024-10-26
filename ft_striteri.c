
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = -1;
	if (!s || !f)
		return ;
	while (s[++index] != '\0')
		(*f)(index, &s[index]);
}
/*
int main()
{
        char    str[] ="aaaa";
        ft_striteri(str,f1);
        printf("%s\n",str);  
}
*/
