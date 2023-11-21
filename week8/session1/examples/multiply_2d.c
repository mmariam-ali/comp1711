#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populate_array(int x[3][4]) {

    for (int i=0; i<3; i++) { //populates array a with random numbers from 1 to 10
        for (int j=0; j<4; j++) {
            x[i][j]= rand() % 10; 
        }
        }}

void print_array(int x[3][4]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n"); 
    }
    printf("-------\n");
}
    

void multiply_array(int a[3][4], int b[3][4], int c[3][4]) {
    for (int i=0; i <3; i++) {
        for (int j=0; j<4; j++) {
            c[i][j]= a[i][j]* b[i][j];
        }
    }
}

int main () {
    int a[3][4]; 
    int b[3][4];
    int c[3][4]; 

    populate_array(a);
    populate_array(b);

    print_array(a);
    print_array(b);

    multiply_array(a, b, c);
    print_array(c);
}


