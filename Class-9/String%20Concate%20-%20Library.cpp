#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    gets(str1);

    char str2[50];
    gets(str2);

    strcat(str1, str2); /// str1 = str1 + str2
    puts(str1);

    return 0;
}