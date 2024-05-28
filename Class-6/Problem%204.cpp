#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    double avg = sum / n;

    printf("%.2lf\n", avg);
    return 0;
}