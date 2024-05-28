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

    int key;
    scanf("%d", &key);

    int counter = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            counter++;
        }
    }

    if(counter==0)
    {
        printf("%d Not Found\n", key);
    }
    else
    {
        printf("%d Found %d time(s)\n", key, counter);
    }
    return 0;
}