#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    getchar();
    if(ch>='A' && ch<='Z')
    {
        ch = ch - 'A';
        ch = ch + 'a';
        printf("%c\n", ch);
    }
    else if(ch>='a' && ch<='z')
    {
        ch = ch - 'a';
        ch = ch + 'A';
        printf("%c\n", ch);
    }
    else
    {
        printf("Invalid Input\n");
    }
    main();
    return 0;
}