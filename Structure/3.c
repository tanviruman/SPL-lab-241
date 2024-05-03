#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

int main() {
    struct Student student1;

    strcpy(student1.name, "Alice");
    strcpy(student1.id, "56789");
    student1.cgpa = 3.8;

    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}

