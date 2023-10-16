#include <stdio.h>
//write a program to find the maximum element in an array of five integers

int main () {
int i, largest =0, arr[5] = {5, 3, 8, 10, 14}, size= sizeof(arr[5]);
for (i=0; i<size+1; i++) {
    if (arr[i]>=largest) 
        largest = arr[i];
    else
        largest = largest;
};
    printf("The largest element is %d\n",largest);




    return 0;
}