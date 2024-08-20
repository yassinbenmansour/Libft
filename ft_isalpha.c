#include "libft.h"
#include <stdio.h>

int isalpha( int c){
    // if((c >= 65 && c <= 90)
    //         || (c >= 97 && c <= 122))
    //         return 1;

     if((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z'))
            return 1;
    return 0;
}

// int main(){
//     printf("%d\n", isalpha('a'));
//     printf("%d\n", isalpha('A'));
//     printf("%d\n", isalpha('1'));
//     return 0;
// }