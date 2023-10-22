#include <stdio.h>
//Write a function named isPrime that takes an integer as a
// parameter andreturns 1 if the number is prime and 0 otherwise. 
//DID IT WAHHOOOOOO


int isPrime(int value) {
    int number_of_factors= 0;

    for (int i=1; i<=value; i++) {
        if (value % i == 0) {
            //counting number of factors, including 1 and itself
            number_of_factors++;   
        }
    }
    //printf("%d\n", number_of_factors);

    //is prime as the only factors are 1 and itself
    if (number_of_factors == 2) {
        return 1;
    }   
    else {
        return 0;
    }

}

int main () {
    int value;

    printf("Enter a value to be checked: ");
    scanf("%d", &value);

    int result = isPrime(value);

        switch (result) {
            case 0:
                printf("The number is not prime\n");
                break;
            case 1:
                printf("The number is prime\n");
                break;
            default: 
                printf("Error\n");
        }

}
