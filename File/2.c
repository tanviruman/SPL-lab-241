#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[100];
    //int number;
    //char name[100];

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    /*while (fscanf(file, "%d %s", &number, name) != EOF) {
        fprintf(stdout, "%d %s\n", number, name);
    }*/

    fclose(file);

    return 0;
}

