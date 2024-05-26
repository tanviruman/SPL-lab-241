#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int currentValue = 1;
    int digitWillBeAdded = 2;

    int sum = 0;
    for(int term=1; term<=n; term++)
    {
        sum = sum + currentValue;

        /// preparing for the next term
        currentValue = (currentValue * 10) + digitWillBeAdded;
        digitWillBeAdded+=1;
    }

    printf("%d\n", sum);
}