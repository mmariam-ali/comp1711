/*Write a function str_len that takes a string as a parameter 
and returnsits length. Do not use the standard librarys strlen 
function. Test your function in main.*/

//stucky
#include <stdio.h>

int str_len(char string) {
    //calculate length of string
    int length=0;
    
    //for (int i=0; string[i]!='\0'; i++) {
    //got str[i] bit from google
        length++;
    }
    
    //length = ;
    //return length;
    


int main () {
    char string[100];
    printf("Enter a string: \n");
    scanf("%s", &string);
    printf("The length of the string is %d\n", strlen(string));

}