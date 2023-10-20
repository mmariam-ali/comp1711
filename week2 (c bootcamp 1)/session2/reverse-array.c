#include <stdio.h>
//write a program to reverse the elements of an array of five integers
int main () {
    int arr[5]= {1, 2, 3, 4, 5}, temp;
    int total = 0;
    int length = sizeof(arr[5]);

    for (int i = 0; i<length/2; i++ ){
        temp = arr[i];
        arr[i] = arr[length-i-1];
        arr[length-i-1]= temp; 
}

    for (int i=0;i <sizeof(arr[5])+1; i++ ){
        printf("%d\n", arr[i]);
    }

    return 0;
}


// // value of first is assigned to temp
//     temp =var1;
//     // value of second is assigned to first
//     var1=var2;
//     // value of temp (initial value of first) is assigned to second
//     var2=temp;