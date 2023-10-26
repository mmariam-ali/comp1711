//this is the implementation file
#include "utils.h"
//only the corresponding header is included
//all functions declared in the header must be implemented
FILE * open_file(char filename [], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("File I/O");
        exit(1); //equivalent to return 1
    } 
return file;
}