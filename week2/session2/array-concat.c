#include <stdio.h>
//write a program to concatenate two integer arrays, each of three integers
//stuck stack smasshing detected-terminated
int main () {
 int i, arr1[3]= {1, 2, 3};
 int arr2[3]= {4, 5, 6};
 int size=sizeof(arr2);
 int arr3[6];

    // for (i=0; i <size +1; i++) {
    //     arr3[i]=arr1[i];
    //     printf("%d\n", arr3[i]);
    // }

    for (int i = 0; i < 3; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 3; i < 6; i++) {
        arr3[i] = arr2[i - 3];
    }
    // Print concatenated array 
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}