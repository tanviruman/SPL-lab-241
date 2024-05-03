#include <stdio.h>
int main() {
    int n, vowel_count  = 0;
    printf("Enter the number of alphabets: ");
    scanf("%d", &n);
    char alphabets[n];

    printf("Enter %d alphabets:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &alphabets[i]);
    }

    for (int i = 0; i < n; i++) {
        char currentChar = alphabets[i];
        if (currentChar == 'A' || currentChar == 'E' || currentChar == 'I' ||
            currentChar == 'O' || currentChar == 'U' || currentChar == 'a' ||
            currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u')
        {
            vowel_count ++;
        }
    }
    printf("Number of vowels: %d\n", vowel_count );
    return 0;
}
