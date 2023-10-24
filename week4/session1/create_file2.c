#include <stdio.h>

int main () {
    char filename [] = "./data1.txt"; //constant character array
    FILE *file = fopen(filename, "w");  //params = pathname and mode
    if (file == NULL) {
        perror("File does not exist yet \n");
        return 1;
    }

    //printf("%ld", file);

    //fprintf(file, "Hello world!");
    int max_numbers = 10, i;
        for (i =1; i<=10; i++){
        fprintf(file, "%d\n", i *i);
    }
        
    


    fclose(file); // open with filename and close with file
    return 0;
}