#include "libft.h"

static int	ft_number_lenght(int nb)
{
	int	ln;

	ln = 0;
	if (nb <= 0)
		ln++;
	while (nb)
	{
		ln++;
		nb = nb / 10;
	}
	return (ln);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_number_lenght(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
