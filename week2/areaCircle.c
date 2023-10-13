#include <stdio.h>

int main () {
    float radius, pi, area;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);
    pi = 3.14159265359;
    area = pi * (radius * radius);
    printf("The area of the circle is %f \n", area);


    return 0;
}