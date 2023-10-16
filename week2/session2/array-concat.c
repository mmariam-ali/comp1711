#include <stdio.h>
//write a program to concatenate two integer arrays, each of three integers
int main () {
 int i, arr1[3]= {1, 2, 3}, arr2[3]= {4, 5, 6};
 int size=sizeof(arr2), arr3[6];

    for (i=0; i <size +1; i++) {
        arr3[i]=arr1[i];
        printf("%d\n", arr3[i]);
    }

    return 0;
}