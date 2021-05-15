#include <stdio.h>

int main() {
    FILE *file;
    char s[255];

    file = fopen("unions_file_management/reading_writing_one_line_at_a_time.c", "r");
    if (file == NULL) {
        printf("Error openings file.\n");
        exit(1);
    }

    while (fgets(s, 255, file) != NULL) {
        printf("%s", s);
    }

    fclose(file);
}