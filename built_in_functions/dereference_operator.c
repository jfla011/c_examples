#include <stdio.h>

int main()
{
    int i1 = 12345;
    int *i2 = &i1;
    printf("%i, %i, %i\n", i1, i2, *i2);
    doubleI(i2);
    printf("%i, %i, %i\n", i1, i2, *i2);

}

doubleI(int *integer) {
    *integer = *integer * 2;
}