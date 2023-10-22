#include <stdio.h>
//  #define _USE_MATH_DEFINES // for C
//  #include <math.h>
// Calculate Area of a Circle

float circleArea(float radius) {
float pi = 3.14159265359, area;
area = pi * (radius * radius );
return area;
}

int main () {
    float radius, area;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    area = circleArea(radius);

    printf("The area of a sphere of radius %f is %f\n", radius, area);


}