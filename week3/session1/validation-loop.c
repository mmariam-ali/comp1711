#include <stdio.h>

int main() {

    int termination =-1, input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input == -1) {
        printf("loop terminated\n");
    }
    else if (input <=100 & input >=0) {
        printf(" ");
    }

    else {

    }


    return 0;
}