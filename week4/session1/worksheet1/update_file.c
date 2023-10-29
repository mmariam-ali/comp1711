#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int i =0;
    char filename []= "numbers.dat";
    FILE *file =fopen(filename, "a+");
    if (file==NULL) {
        perror("File empty");
        return 1;
    }
    
    int buffer_size = 100;
    char buffer[buffer_size];
    int counter =0;
    float sum =0, average;

    while (fgets(buffer, buffer_size, file) != NULL) {
        sum += atof(buffer);
        counter++;
        if (buffer[strlen(buffer)-1] != '\n') {
            fprintf(file, "\n");
        }
    }
    average = sum /counter;
    fprintf(file, "%f\n", average );


    fclose(file);
return 0;


}