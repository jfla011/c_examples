#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float f1 = abs(-123);
    float f2 = cos(0);
    float f3 = sqrt(2);
    int f4 = pow(2, 10);

    printf("abs: %f\n", f1);
    printf("cos: %f\n", f2);
    printf("sqrt: %f\n", f3);
    printf("pow: %i\n", f4);
}