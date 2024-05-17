#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int lineCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);

    printf("The number of lines in the file is: %d\n", lineCount);

    return 0;
}

