#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        if (str[i]  >= 'a' && str[i]  <= 'z') {
            str[i]  = str[i]- 32;
        }
        else if (str[i]  >= 'A' && str[i]  <= 'Z') {
            str[i]  = str[i]  + 32;
        }


    }

    printf("The string is: %s\n", str);

    return 0;
}
