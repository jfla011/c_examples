#include <stdio.h>

int main()
{
    char *c1 = "The quick brown fox jumps over the lazy dog";
    int i1 = 12345;
    long long *i2 = &i1;
    printf("%i, %i, %i\n", i1, i2, *i2);
    i1 += 1;
    printf("%i, %i, %i\n", i1, i2, *i2);
}