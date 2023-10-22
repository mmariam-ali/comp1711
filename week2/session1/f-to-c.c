#include <stdio.h>
//Write a program to convert Fahrenheit to Celsius.
int main() {
    float fahrenheit, celsius;
    printf("Enter Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("The value of %f in celcius is: %f \n", fahrenheit, celsius);
    return 0;
}


// #include<stdio.h>
// int main(){
//    float fahrenheit, celsius;
//    //get the limit of fibonacci series
//    printf("Enter Fahrenheit: ");
//    scanf("%f",&fahrenheit);
//    celsius = (fahrenheit - 32)*5/9;
//    printf("Celsius: %f ", celsius);
//    return 0;
// }