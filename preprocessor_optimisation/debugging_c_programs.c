#include <stdio.h>
#include <assert.h>

int main()
{
    int x = 5;
    printf("The value of x: %i\n", x);
    x = x * 4 - 10;
    printf("The value of x after calculation: %i\n", x);

    assert(x > 10);
    assert(x < 10);
}