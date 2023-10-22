#include <stdio.h>
// Write a program to swap the values of two variables.
int main () {
    float var1, var2, temp;
    printf("Enter a variable:\n");
    scanf("%f", &var1);
    printf("Enter another variable:\n");
    scanf("%f", &var2);

    // value of first is assigned to temp
    temp =var1;
    // value of second is assigned to first
    var1=var2;
    // value of temp (initial value of first) is assigned to second
    var2=temp;
    
    printf("variable 1 is now %.f\n", var1);
    printf("variable 2 is now %.f\n", var2);


    return 0;
}