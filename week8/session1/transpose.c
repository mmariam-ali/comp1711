#include <stdio.h>
#include <stdlib.h>

void populate_arrays(int a[2][3]) {
  for (int i=0; i<2; i++) { //populates array a with random numbers from 1 to 10
        for (int j=0; j<3; j++) {
            a[i][j]= rand() % 10; 
        }
    }
}

void transpose_array(int a[2][3]) {
    int temp;
    int t[3][2];

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            t[i][j]=a[j][i];


            // temp = a[i][j];
            // a[i][j]= a[j][i];
            // a[j][i]= temp;
            //a[i][j]=a[j][i];
        }
    }
}

void print_array(int a[2][3]) {
  for (int i = 0; i < 2; i++) {
     for (int j = 0; j < 3; j++) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
     printf("-------\n");
}

void print_tarray(int a[3][2]) {
  for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 2; j++) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
     printf("-------\n");
}

int main () {

    int array_a[2][3];
    int array_t[2][3];

    populate_arrays(array_a);

    printf("Matrix A: \n");
    print_array(array_a);

    transpose_array(array_a);

    printf("Matrix A Transpose: \n");
    print_tarray(array_t);

}