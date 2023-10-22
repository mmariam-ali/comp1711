#include <stdio.h>
//calculate volume of a sphere
float volumeSphere (float radius) {
float pi = 3.14159265359, volume, fraction = 1.33333333333;
volume = fraction * pi * (radius * radius * radius);
return volume;
}

int main () {
    float radius, volume;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume= volumeSphere(radius);

    printf("The volume of a circle of radius %f is %f\n", radius, volume);
}