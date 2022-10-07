#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	len = ft_strlen(s1);
	str = ((char *)malloc(sizeof(*str) * (len + 1)));
	if (str == NULL)
		return (NULL);
	while (index < len)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
