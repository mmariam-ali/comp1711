#include <stdio.h>

struct student {
    char name [20];
    char student_id [11];
    unsigned mark;
};

int main () {
    struct student new_student;
    //string copy
    //declared but not initialised 
    strcpy(new_student.name, "Mariam Ali");
    strcpy(new_student.student_id, "13902178");
    //strcpy(new_student.mark, 40 ); //prints garbage value
    new_student.mark = 20;

    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);

}