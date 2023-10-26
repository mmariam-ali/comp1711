#include <stdio.h>
#include "utils.h"

int main () {
    char filename [] = "./data1.txt"; //constant character array
    FILE *file = open_file(file, "w");
    
    int max_numbers = 10, i;
        for (i =1; i<=10; i++){
        fprintf(file, "%d\n", i *i);
    }
        
    fclose(file); // open with filename and close with file
    return 0;
}


//printf("%ld", file)
    //fprintf(file, "Hello world!");