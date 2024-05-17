#include <stdio.h>

int str_length(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int find_substr(const char a[], const char b[]) {
    int len_a = str_length(a);
    int len_b = str_length(b);

    for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                break; // Characters don't match, break the inner loop
            }
        }
        if (j == len_b) {
            return 1; // Match found, return 1
        }
    }

    return -1; // No match found, return -1
}

int main() {
    char a[100], b[100];

    // Input strings a and b
    printf("Enter string a: ");
    //fgets(a, sizeof(a), stdin);
    scanf("%[^\n]",&a);
    scanf("%*c",&a);

    printf("Enter string b: ");
    //fgets(b, sizeof(b), stdin);
    scanf("%[^\n]",&b);

    // Call find_substr function
    int result = find_substr(a, b);

    // Output the result
    if (result == 1) {
        printf("String b is found in string a.\n");
    } else {
        printf("String b is not found in string a.\n");
    }

    return 0;
}

