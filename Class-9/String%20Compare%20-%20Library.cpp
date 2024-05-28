#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int res = strcmp(str1, str2);
    /**
    str1 == str2 -> 0
    str1 > str2 -> Positive Value (+1)
    str1 < str2 -> Negative Value (-1)
    **/

    if(res==0)
    {
        printf("SAME STRING\n");
    }
    else if(res>0)
    {
        printf("STR1 is lexicographically greater than STR2");
    }
    else
    {
        printf("STR1 is lexicographically less than STR2");
    }


    return 0;
}