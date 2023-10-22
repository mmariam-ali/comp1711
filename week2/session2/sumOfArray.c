#include <stdio.h>
//Write a program to find the sum of all elements in an array of five integers.
int main () {
    int arr[5]= {1, 2, 3, 4, 5};
    int total = 0;
    int i;
    int length = sizeof(arr[5]);

    for (i = 0; i< length+1; i++ ){
        total = total + arr[i];

    }
    printf("%d\n", total);
    return 0;
}