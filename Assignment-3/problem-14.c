#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of A array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element  of A array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m;
    printf("Enter the size of B array:");
    scanf("%d", &m);
    int b[m];
    printf("Enter the element  of B array:");
    for(int i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    int temp_a[m];
    for(int i=0; i<m; i++)
    {
        temp_a[i]=b[i];
    }


    int temp_b[n];
    for(int i=0; i<n; i++)
    {
        temp_b[i]=a[i];
    }

     b[n];

    for (int i=0; i<n; i++)
    {
        b[i]=temp_b[i];
    }
    for (int i=0; i<m; i++)
    {
        a[i]=temp_a[i];
    }
    printf("Array A:");
    for (int i=0; i<m; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray B:");

     for(int i=0; i<n; i++)
        printf("%d ", b[i]);

    return 0;
}
