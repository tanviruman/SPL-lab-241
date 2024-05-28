#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }


    int m;
    scanf("%d", &m);
    int B[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d", &B[i]);
    }



    for(int i=0; i<n; i++)
    {
        int x = A[i];

        int counter = 0;
        for(int j=0; j<m; j++)
        {
            if(B[j] == x)
            {
                counter++;
            }
        }
        if(counter==0)
            printf("%d ", x);
    }
    return 0;
}