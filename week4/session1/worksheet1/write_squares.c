//write to a file squares.dat the squares of numbers 1 to n
#include <stdio.h>

int main () {
    int num, i;
    char filename [] ="squares.dat";
    FILE *file= fopen(filename, "w");

    printf("Enter a number of numbers to be squared: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        fprintf(file, "%d\n", i*i);
    }


    fclose(file);
    return 0;
}