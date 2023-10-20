#include <stdio.h>

int main () {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    result = num%2;

    if (result == 0) 
        printf("%d is even\n", num);
    
    else 
        printf("%d is odd\n", num);
    
    
    return 0;
}