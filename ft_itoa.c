
#include "libft.h"

static int	ft_numlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		lenth;
	char	*str;
	long	nb;

	lenth = ft_numlen(n);
	str = malloc(sizeof(char) * lenth + 1);
	nb = n;
	if (!str)
		return (NULL);
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[lenth--] = '\0';
	while (nb)
	{
		str[lenth] = nb % 10 + 48;
		nb = nb / 10;
		lenth--;
	}
	return (str);
}
/*
int main()
{
    char	*i1 = ft_itoa(-623);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);

        printf ("%d\n", strcmp(i1,"-623"));
        printf ("%d\n", strcmp(i2,"156"));
        printf ("%d\n", strcmp(i3,"0"));
}
*/
