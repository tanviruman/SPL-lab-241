#include <stdio.h>

int main()
{
    char str[50];
    int i, length = 0;

    printf("Input a string : ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of the string %s is : %d\n", str, length);

    return 0;
}
