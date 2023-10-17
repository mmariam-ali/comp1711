#include <stdio.h> 

int main() {
    float temperature;
    printf("What is the temperature? ");
    scanf("%f", &temperature);

    //float threshold = 15;

    if (temperature > 10) 
        printf("Good weather for a jacket.\n");
    else if (temperature > 20)
        printf("no need for a jacket");
    else 
        printf("wear jacket.\n");

return 0;
}