#include<stdio.h>
struct Student
{
    char name[50];
    int id;
    double cgpa;
};

typedef struct Student Stdt;


void printBetterStudent(Stdt students[])
{
    if(students[0].cgpa>students[1].cgpa)
    {
        printf("%s %d %lf\n", students[0].name, students[0].id, students[0].cgpa);
    }
    else
    {
        printf("%s %d %lf\n", students[1].name, students[1].id, students[1].cgpa);
    }
}
int main()
{

    Stdt students[2];

    gets(students[0].name);
    scanf("%d", &students[0].id);
    scanf("%lf", &students[0].cgpa);

    getchar();


    gets(students[1].name);
    scanf("%d", &students[1].id);
    scanf("%lf", &students[1].cgpa);


    printBetterStudent(students);


    return 0;
}