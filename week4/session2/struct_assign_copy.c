#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//take input from user and copy into struct assign
struct student {
    char name [20];
    char student_id [11];
    unsigned mark;
};

int main () {
    char name [20], id[11];
    unsigned mark;

    printf("Enter a first and last name and id and mark: ");

    scanf("%s", name);
    scanf("%s", id);
    scanf("%u", &mark);    

    struct student new_student; //= {name, id, mark}; can only create a const like this with constants
    strcpy(new_student.name, name);
    strcpy(new_student.student_id, id);
    new_student.mark = mark;
    
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);

}