#include "libft.h"
#include <stdio.h>
int isalpha( int character ){
    // if((character >= 65 && character <= 90)
    //         || (character >= 97 && character <= 122))
    //         return 1;

     if((character >= 'a' && character <= 'z')
            || (character >= 'A' && character <= 'Z'))
            return 1;
    return 0;
}

// int main(){
//     printf("%d\n", isalpha('a'));
//     printf("%d\n", isalpha('A'));
//     printf("%d\n", isalpha('1'));
//     return 0;
// }