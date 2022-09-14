
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultat;
	int	sign;

	resultat = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + (*str - '0');
		str++;
	}
	return (resultat * sign);
}
