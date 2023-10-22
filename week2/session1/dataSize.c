#include <stdio.h>
//Write a program to display the maximum
//sizes of basic data types (int, float, double, char).
int main () {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Max size of int: %zu bytes\n", sizeof(intType));
    printf("Max size of float: %zu bytes\n", sizeof(floatType));
    printf("Max size of double: %zu bytes\n", sizeof(doubleType));
    printf("Max size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}