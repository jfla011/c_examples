#include <stdio.h>

int main()
{
    char string[10];
    int integer = 0;
    scanf("%10s %i", string, &integer);
    printf("Input: %s %i\n", string, integer);

    float floatingPoint = 5;
    scanf("%f", &floatingPoint);
    printf("input: %f\n", floatingPoint);

    char c = getchar();
    c = getchar();
}