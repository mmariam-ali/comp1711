#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//set inputs as const so they cannot be changed
//pass in data via pointers to the two character arrays. position is important, not names
//this is an example of pass by reference as we are using pointers to the arrays
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

//characters arrays-pointers
int main() {
    char record[21] = "2023-09-01,07:30,300";
    char date[11];
    char time[6];
    char steps[10];  // Large enough to hold a typical step count as a string

    int stepsint;
    
    //record and , are input parameters
    //date time and steps are output parameters
    tokeniseRecord(record, ",", date, time, steps);
    
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Steps: %s\n", steps);

    // Convert the steps string to an integer
    stepsint = atoi(steps);
    printf("Steps as an integer: %d\n", stepsint);
    
    return 0;
}