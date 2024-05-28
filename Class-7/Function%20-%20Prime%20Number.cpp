#include<stdio.h>

bool isPrime(int x)
{
    if(x<=1)
    {
        return false;
    }

    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }

    return true;
}

void nPrime(int n)
{
    for(int i=1; i<=n; i++)
    {
        bool flag = isPrime(i);
        if(flag==true)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}



int main()
{
    nPrime(100);
}