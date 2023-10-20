#include <stdio.h>

int main () {
    int mark;

    printf("Enter a mark: ");
    scanf("%d", &mark);

    if (mark >=0 && mark <=100) 
    {
        if (mark >= 40 && mark <=100) {
            printf("The mark of %d is a pass\n", mark);
        }
        else if (mark >=0){
            printf("The mark of %d is a fail\n", mark);
        }
    }
    else {
        printf("Mark is not valid- must be between 0 and 100\n");
    }
    
    return 0;
}