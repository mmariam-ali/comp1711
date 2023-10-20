#include <stdio.h>
//write a program to check if a student has passed, failed or achieved a distinction 
int main () {
    int mark;
    printf("Enter a mark: \n");
    scanf("%d",&mark);

    if (mark>=0 && mark<=100)
        {if (mark >= 70) {
            printf("You have achieved a distinction\n");
        }
        else if (mark >= 50){
            printf("You have passed\n");
        }
        else 
            printf("You have failed\n");
        }
    else 
        printf ("invalid mark\n");
    

    return 0;
}