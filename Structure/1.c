#include <stdio.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

int main() {
    struct Student student1;

    printf("Enter student name: ");
    scanf("%[^\n]", student1.name);

    printf("Enter student ID: ");
    scanf(" %[^\n]", student1.id);

    printf("Enter student CGPA: ");
    scanf("%f", &student1.cgpa);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}

