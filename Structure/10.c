#include <stdio.h>

struct triangle {
    int triangle_id;
    double base;
    double height;
};


double calculateArea(struct triangle t) {
    return (t.base * t.height) / 2.0;
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

    printf("Triangle Details and Areas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Triangle %d - ID: %d, Base: %.2lf, Height: %.2lf, Area: %.2lf\n",
               i + 1, triangles[i].triangle_id, triangles[i].base, triangles[i].height, calculateArea(triangles[i]));
    }

    return 0;
}

