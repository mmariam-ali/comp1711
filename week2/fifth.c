#include <stdio.h>

int main () {
    float var1;
    float var2;
    printf("Insert a length: ");
    printf("Insert a width: ");

    scanf("%f", &var1);
    scanf("%f", &var2);

    printf("The area of the rectangle is %f ", var1 * var2);
    return 0;

    

}