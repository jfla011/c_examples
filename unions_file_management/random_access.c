#include <stdio.h>

int main () {
    FILE *file;
    char fc = 0;

    file = fopen("unions_file_management/random_access.c", "r");
    if (file == NULL) {
        printf("Error opening file");
        exit(1);
    }

    fseek(file, 100, SEEK_SET);
    while (fc != EOF) {
        fc = fgetc(file);
        printf("%c", fc);
    }
    fclose(file);
}