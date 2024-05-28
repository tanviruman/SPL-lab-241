#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2)
    {
        printf("NOT SAME STRING\n");
    }
    else
    {
        bool flag = true;
        for(int i=0; str1[i]!='\0'; i++)
        {
            if(str1[i]!=str2[i])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            printf("SAME STRING\n");
        }
        else
        {
            printf("NOT SAME STRINGS\n");
        }
    }

    return 0;
}