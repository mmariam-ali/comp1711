#include <stdio.h>

int main () {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    result = num%2;

    if (result == 0) 
        printf("The integer is even");
    
    else 
        printf("The integer is odd");
    
    
    return 0;
}