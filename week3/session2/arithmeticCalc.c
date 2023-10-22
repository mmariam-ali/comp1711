/*write a function that takes two floats and a character representing
an arithmetic operation. the function shuold return the result of the
operation*/

#include <stdio.h>

int calc( float number1, float number2, char operation) {
    float result;
    scanf("%f %f %c", &number1, &number2, &operation);
   //printf("%f %f %c", number1, number2, operation);

    switch(operation) {
        case '+':
            result =  number1 + number2;
            break;
        case '-':
            result =  number1 - number2;
            break;
        case '/':
            result =  number1 / number2;
            break;
        case '*':
            result= number1 * number2;
            break;
    }
    return result;
}

int main () {
    int number1, number2;
    char operation;

    printf("Enter two numbers and an operation: ");
    scanf("%f %f %c", &number1, &number2, &operation);

    printf(calc(number1, number2, operation));
}