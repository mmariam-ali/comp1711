#include <stdio.h>

int main () {
    char filename [] = "./write2.txt"; //constant character array
    FILE *file = fopen(filename, "w");  //params = pathname and mode
    if (file == NULL) {
        perror("File does not exist yet \n");
        return 1;
    }

    //printf("%ld", file);

    //fprintf(file, "Hello world!");

    //asks for a number and writes it to the file 10 times
    int number;
    printf("Type a number: ");
    scanf("%d", &number);
    for (int i=0; i< 10; i++) {
        fprintf(file, "%d\n", number);
    }


    fclose(file); // open with filename and close with file
    return 0;
}