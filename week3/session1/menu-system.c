#include <stdio.h>

int main () {
    int option;
    printf("Select an option: ");
    scanf("%d", &option);
    
    switch (option){

        case 1: printf("option 1 has been selected\n");
        break;

        case 2: printf("option 2 has been selected\n");
        break;

        case 3: printf("option 3 has been selected\n");
        break;

        case 4: printf("option 4 has been selected\n");
        break;

        case 5: printf("option 5 has been selected\n");
        break;

        default: printf("an invalid option has been selected\n");

    }



    return 0;
}