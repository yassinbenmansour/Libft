#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c){
    if(isalpha(c) || isdigit(c))
        return 1;
    return 0;
}

int main(){
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('1'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('!'));
    return 0;
}