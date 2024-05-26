#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<n; i++)
    {
        if(arr[i]%3==0)
        {
            arr[i] = -1;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
