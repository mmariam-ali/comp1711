#include <stdio.h>

int main () {
    float height, width, area;

    printf("enter a height: ");
    scanf("%f", &height);
    printf("enter a width:  ");
    scanf("%f", &width);

    area = height * width;
    printf("The area of the rectangle is: %.f\n ", area);

    return 0;

}