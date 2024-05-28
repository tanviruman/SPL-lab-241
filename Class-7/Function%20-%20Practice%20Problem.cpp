#include<stdio.h>
int isEven(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}


int maximumOdd(int arr[], int n)
{
    int maximum = -1;
    for(int i=0; i<n; i++)
    {
        int res = isEven(arr[i]);
        if(res==0) /// arr[i] -> Odd
        {
            if(arr[i]>maximum)
            {
                maximum = arr[i];
            }
        }
    }

    return maximum;
}


int main()
{
    int n = 6;
    int arr[n] = {2, 4, 6, 8, 10, 12};

    int outcome = maximumOdd(arr, n);
    printf("%d\n", outcome);
    return 0;
}