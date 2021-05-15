#include <stdio.h>

int main() {
    FILE *file;
    char s[255];
    int charsRead = 255;

    file = fopen("unions_file_management/reading_writing_one_block_at_a_time.c", "r");
    if (file == NULL) {
        printf("Error openings file.\n");
        exit(1);
    }

    while (charsRead == 255) {
        charsRead = fread(&s, sizeof(char), 255, file);
        for (int i=0; i < charsRead; i++ ){
            printf("%i: %c\n", i, s[i]);
        }
    }

    fclose(file);
}