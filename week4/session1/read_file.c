#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h> //library for exit


// FILE * open_file(char filename [], char mode[]) {
//     FILE *file = fopen(filename, mode);
//     if (file == NULL) {
//         perror("File I/O");
//         exit(1); //equivalent to return 1
//     } 
// return file;
// }


//read file from data3.txt
int main () {
    char filename [] = "data1.txt";
    FILE *file = open_file(filename,"r");
    int buffer_size = 2; //created buffer of 1 character
    int count =0;
    char buffer[buffer_size]; //copied from the file into the buffer 100 chars
    while (fgets(buffer, buffer_size, file)) {
        printf("%s", buffer);
        count++;
    } //fgets returns value of buffer

    printf("The loop was executed %d times\n", count);
    
    fclose(file);
    return 0;
    }