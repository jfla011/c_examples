#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
    float f1 = 123.456;
    float f2 = -123.456;
    float f3 = 456.789;
    float f4 = -456.789;

    printf("f1: %.3f %.3f %.3f\n", f1, floor(f1), ceil(f1));
    printf("f2: %.3f %.3f %.3f\n", f2, floor(f2), ceil(f2));
    printf("f3: %.3f %.3f %.3f\n", f3, floor(f3), ceil(f3));
    printf("f4: %.3f %.3f %.3f\n", f4, floor(f4), ceil(f4));
}