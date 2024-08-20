#include "libft.h"
#include <stdio.h>

int     ft_isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        return (0);
}

// int main(){
//      printf("%d\n", isdigit(5));
//      printf("%d\n", isdigit('5'));
//      printf("%d\n", isdigit('a'));
//      printf("%d\n", isdigit('A'));

//      return 0;
// }
