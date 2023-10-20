#include <stdio.h>
//write a program to check if a number is positie, negative or zero
int main () {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num<0) {
        printf("The number is negative\n");
    }
    else if (num>0) {
        printf("The number is positive\n");
    }
    else {
        printf("The number is 0\n");
    }

    return 0;
}