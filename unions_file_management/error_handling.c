#include <stdio.h>

int main() {
    FILE *file;
    char fc = 0;

    file = fopen("unions_file_management/error_handling.c", "r");
    if (file == NULL) {
        printf("Error trying to open the source file. \n");
        exit(1);
    }

    do {
        fc = fgetc(file);
        if (ferror(file) == 0) {
            printf("%c", fc);
        }
    } while (feof(file) == 0);
    fclose(file);
}