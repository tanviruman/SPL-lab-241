#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    gets(str1);

    char str2[50];
    gets(str2);

    int lenStr1 = strlen(str1);
    int j = lenStr1;

    for(int i=0; str2[i]!='\0'; i++)
    {
        str1[j] = str2[i];
        j++;
    }
    str1[j] = '\0';

    printf("%s\t%s\n", str1, str2);
    return 0;
}
