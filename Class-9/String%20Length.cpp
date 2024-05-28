#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    int length = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}