#include <stdio.h>

int main()
{
    int i1 = 123;
    float f1 = 456.789F;
    char *s1 = "string";

    void *v = s1;
    printf("%s\n", v);
    v = &i1;
    printf("%i\n", v);
    printf("%i\n", *(int *)v);
    v = &f1;
    printf("%i\n", v);
    printf("%f\n", *(float *)v);
}