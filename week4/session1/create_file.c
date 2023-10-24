#include <stdio.h>

int main () {
    char filename [] = "./data.txt"; //constant character array
    FILE *file = fopen(filename, "w");  //params = pathname and mode
    if (file == NULL) {
        perror("File I/O");
        return 1;
    }

    printf("%ld", file);

    fprintf(file, "Hello world!\n");

    
    fclose(file); // open with filename and close with file
    return 0;
}