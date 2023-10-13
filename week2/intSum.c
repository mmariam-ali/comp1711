#include <stdio.h>

int main () {
    float num1, num2, sum;
    printf("Enter a number:\n");
    scanf("%f", &num1);
    printf("Enter another number:\n");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("The sum is %f\n", sum);

    return 0;
}