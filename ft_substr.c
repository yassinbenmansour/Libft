#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (ft_strlen(s + start) < len)
		dest = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[start] && index < len)
	{
		dest[index] = s[start];
		index++;
		start++;
	}
	dest[index] = '\0';
	return (dest);
}
