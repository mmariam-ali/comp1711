#include <stdio.h>
//write a program to calculate simple interest given the principal, rate and time
int main (){
    float principal, rate, time, simple_interest;
printf("Enter the principal value: ");
scanf("%f", &principal);

printf("Enter the rate of interest as a decimal: ");
scanf("%f", &rate);

printf("Enter the a length of time in days: ");
scanf("%f", &time);

simple_interest= (principal * rate * time) / 100;
printf("The calculated simple interest is: %f\n",simple_interest);

    return 0; 
}