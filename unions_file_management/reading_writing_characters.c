#include <stdio.h>

int main() {
    FILE *file;
    char fc = 0;

    file = fopen("unions_file_management/reading_writing_characters.c", "r");
    if (file == NULL){
        printf("Error trying to open the source file.\n");
        exit(1);
    }

    while (fc != EOF){
        fc = fgetc(file);
        printf("%c", fc);
    }

    fclose(file);
}