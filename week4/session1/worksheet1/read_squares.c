//read numbers from squares.dat and output the average
//got help from @PortfoliocCourses on youtube
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file= fopen(filename, "r");
    if (file ==NULL){
        perror("File is empty");
        return 1;
    }

    int buffer_size =100;
    char buffer[buffer_size];
    int total = 0;
    double average, sum =0;

    while (fgets(buffer, buffer_size,file) != NULL) {
        sum += atof(buffer);
        total ++;
    }

    average = sum / total;
    printf("%f\n", average);

    fclose(file);
    return 0;
    ;


}