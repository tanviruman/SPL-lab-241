#include <stdio.h>

struct triangle {
    int triangle_id;
    double base;
    double height;
};

double calculateArea(struct triangle t) {
    return (t.base * t.height) / 2.0;
}


int findMaxAreaTriangle(struct triangle triangles[], int n) {
    int maxIndex = 0;
    double maxArea = calculateArea(triangles[0]);

    for (int i = 1; i < n; i++) {
        double area = calculateArea(triangles[i]);
        if (area > maxArea) {
            maxArea = area;
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main() {
    struct triangle triangles[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Triangle %d:\n", i + 1);
        triangles[i].triangle_id = i + 1;

        printf("Enter base: ");
        scanf("%lf", &triangles[i].base);

        printf("Enter height: ");
        scanf("%lf", &triangles[i].height);

        printf("\n");
    }


    int maxIndex = findMaxAreaTriangle(triangles, 3);


    printf("Triangle with Maximum Area:\n");
    printf("Triangle %d - ID: %d, Base: %.2lf, Height: %.2lf, Area: %.2lf\n",
           maxIndex + 1, triangles[maxIndex].triangle_id, triangles[maxIndex].base,
           triangles[maxIndex].height, calculateArea(triangles[maxIndex]));

    return 0;
}

