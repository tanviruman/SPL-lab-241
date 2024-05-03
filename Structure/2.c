#include <stdio.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

int main() {
    struct Student student1 = {"John Doe", "S12345", 3.5};

    printf("Default Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}

