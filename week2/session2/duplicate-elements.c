#include <stdio.h>
//write a program to find duplicate elements in an array of six random integers
int main () {
int i, j, count=1, arr[6] = {1,2,3,4,4,6}, n=sizeof(arr[5]);
 
for (i=0; i<n+1; i++) {
    for (j=i+1; j< n+1; j++) {
        if (arr[i]==arr[j]) {
            printf("Duplicate: %d\n", arr[j]);
           // count++;
        }
        // else 
        //     count=count;
    }
}
    //printf("%d\n", count);
    return 0;
}