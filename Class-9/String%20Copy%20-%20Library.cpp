
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50];
    gets(str1);

    char str2[50] = {'\0'};

    strcpy(str2, str1);

    printf("%s\t%s\n", str1, str2);
    return 0;
}


