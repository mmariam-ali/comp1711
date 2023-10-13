#include <stdio.h> 
#include <string.h>

int main () {
    int i = 0;

    char str[10] = "Hello" ;
    int length = strlen(str);


    for ( i=length; i>=0; i--) {
        printf("%c \n", str[i] );
    }

    return 0;
}