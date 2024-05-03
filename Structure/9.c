#include <stdio.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

void printBetterCGPA(struct Student student1, struct Student student2) {
    if (student1.cgpa > student2.cgpa) {
        printf("\nStudent with better CGPA:\n");
        printf("Name: %s, ID: %s, CGPA: %.2f\n", student1.name, student1.id, student1.cgpa);
    } else if (student2.cgpa > student1.cgpa) {
        printf("\nStudent with better CGPA:\n");
        printf("Name: %s, ID: %s, CGPA: %.2f\n", student2.name, student2.id, student2.cgpa);
    } else {
        printf("\nBoth students have the same CGPA.\n");
    }
}

int main() {
    struct Student student1, student2;

    printf("Enter student name: ");
    scanf(" %[^\n]", student1.name);

    printf("Enter student ID: ");
    scanf(" %[^\n]", student1.id);

    printf("Enter student CGPA: ");
    scanf("%f", &student1.cgpa);

    printf("Enter student name: ");
    scanf(" %[^\n]", student2.name);

    printf("Enter student ID: ");
    scanf(" %[^\n]", student2.id);

    printf("Enter student CGPA: ");
    scanf("%f", &student2.cgpa);

    printBetterCGPA(student1, student2);

    return 0;
}
