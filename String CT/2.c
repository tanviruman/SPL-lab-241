#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    //scanf("%[^\n]", &str1);
    gets(str1);

    //scanf("%*c",&i);

    printf("Enter the second string: ");
    //scanf("%[^\n]", &str2);
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        ;
    }

    // Concatenating the second string to the first string
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];//str1[2] = str2[0]
    }

    // Adding the null character at the end of the concatenated string
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
