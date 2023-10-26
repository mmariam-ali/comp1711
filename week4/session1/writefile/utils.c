#include "utils.h"

FILE *open_file(char filename[], char mode[]);
    FILE *file = fopen(filename, "w");  //params = pathname and mode
        if (file == NULL) {
            perror("File does not exist yet \n");
            exit 1;
        }