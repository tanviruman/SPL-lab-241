#include <stdio.h>
int main() {
int N;
printf("Enter the number of  Students: ");
scanf("%d", &N);

for ( int i = 1; i <= N; i++) {
float attendance, assignment, classtest, midterm, Final;
float total;

printf("Enter the marks of  Student %d (Attendance, Assignment, Class Test, Midterm,  Final): ", i);
scanf("%f%f%f%f%f", &attendance, &assignment, &classtest, &midterm, &Final);

total = attendance + assignment + classtest + midterm * 0.6 + Final * 0.4;
printf("Total marks:%f\n", total);

if (total >= 90) {
printf("Grade of Student %d : A\n", i);
}
else if (total >= 86) {
printf("Grade of Student %d : A-\n", i);
}
else if (total >= 82) {
printf("Grade of Student %d : B+\n", i);
}
else if (total >= 78) {
printf("Grade of Student %d : B\n", i);
} else if (total >= 74) {
printf("Grade of Student %d : B-\n", i);
} else if (total >= 70) {
printf("Grade of Student %d : C+\n", i);
} else if (total >= 66) {
printf("Grade of Student %d : C\n", i);
} else if (total >= 62) {
printf("Grade of Student %d : C-\n", i);
} else if (total >= 58) {
printf("Grade of Student %d : D+\n", i);
} else if (total >= 55) {
printf("Grade of Student %d : D\n", i);
} else {
printf("Grade of Student %d : F\n", i);
}
}

return 0;
}
