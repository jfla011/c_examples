#include <stdio.h>

int main(){
    FILE *file;

    file = fopen("unions_file_management/declaring_unions.c", "r");
    if (file == NULL)
        printf("Error trying to open the source file.\n");
    else
        printf("%i %i\n", file, fileno(file));

    fclose(file);
}