#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);

    int left = 0;
    int right = strlen(str) - 1;

    while(left<right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
    printf("%s", str);

    return 0;
}