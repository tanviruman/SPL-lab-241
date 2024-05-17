#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "1 Zahid\n");
    fprintf(file, "2 Tanvir\n");
    fprintf(file, "3 Akif\n");

    fclose(file);

    printf("Information has been successfully written to sample.txt file.\n");

    return 0;
}

