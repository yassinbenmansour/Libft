
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	mem_size;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	mem_size = count * size;
	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem_size);
	return (ptr);
}
/*
int main()
{
	char *j;

    j = ft_calloc(4,sizeof(char));
    int i = 0;
    while(i < 4)
	{
		printf("%d\n",j[i]);         
		i++;
	}
	free(j);
}
*/
