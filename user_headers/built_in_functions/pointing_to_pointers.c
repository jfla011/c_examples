#include <stdio.h>

int main()
{
    int i1 = 12345;
    int *i2 = &i1;
    int **i3 = &i2;
    printf("i1: %i, *i2: %i, **i3: %i, i2: %p, i3: %p\n", i1, *i2, **i3, i2, i3);
    i2 = i2 + 0x1;
    printf("i1: %i, *i2: %i, **i3: %i, i2: %p, i3: %p\n", i1, *i2, **i3, i2, i3);

}