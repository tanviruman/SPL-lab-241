#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "4 Imran\n");
    fprintf(file, "5 Nusrat\n");
    fprintf(file, "6 Farid\n");

    fclose(file);

    printf("Information has been successfully appended to the file.\n");

    return 0;
}

