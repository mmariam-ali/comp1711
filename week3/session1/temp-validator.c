#include <stdio.h>

int main () {
    float temperature;

    printf("input a temperature: ");
    scanf("%f", &temperature);

    if (temperature>=-10 && temperature<=40) {
        printf("The temperature is within range\n");
    }
    else {
        printf("The temperature is invalid\n");
    }


    return 0;
}