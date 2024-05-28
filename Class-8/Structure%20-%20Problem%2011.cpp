#include<stdio.h>
struct Triangle
{
    int id;
    double height;
    double base;
};

typedef struct Triangle Tri;

void printMaximumArea(Tri triangles[])
{
    double maximum = 0;
    int maximum_index;

    for(int i=0; i<3; i++)
    {
        double area_ith_triangle = 0.5 * triangles[i].base * triangles[i].height;
        if(area_ith_triangle>maximum)
        {
            maximum = area_ith_triangle;
            maximum_index = i;
        }
    }

    printf("Area of %d = %.2lf\n", triangles[maximum_index].id, maximum);
}
int main()
{
    Tri triangles[3];

    for(int i=0; i<3; i++)
    {
        scanf("%d%lf%lf", &triangles[i].id, &triangles[i].base, &triangles[i].height);
    }
    printMaximumArea(triangles);
    return 0;
}