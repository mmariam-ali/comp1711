#include <stdio.h>
struct student {
    char name [20];
    char student_id [11];
    unsigned mark;
};

int main () {
    struct student new_student= {"Mariam Ali", "28932123", 35};
    //initialising individual fields
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);

}

struct group {
    struct student mazza;

};

