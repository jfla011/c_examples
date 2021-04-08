#include <stdio.h>

int main()
{
    char *s1 = "Pointing to a string.";
    printf("%s\n", s1);

    char *s2[] = { "Pointing to a string." };
    s2[0] = '|';
    printf("%s\n", s2);

    char s3[50] = "Pointing to a string.";
    s3[5] = '/';
    printf("%s\n", s3);

    char *s4[] = { "Pointing to a string." };
    printf("%s\n", s4[0]);
    printf("%s\n", *s4);
}