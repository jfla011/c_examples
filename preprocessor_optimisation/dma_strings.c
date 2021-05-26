#include <stdio.h>

int main()
{
    char *s;
    printf("1. %s\n", s);
    s = malloc(1000000000);
    printf("2. %s\n", s);
    strcpy(s, "This is a test string to show that some memory has been allocated.");

    printf("3. %s\n", s);

    char c = getchar();
    free(s);

}