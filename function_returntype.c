#include <stdio.h>
#include <math.h>

double function1(double, double);
char *function2();

int main()
{
    printf("10, 15: %g\n", function1(10, 15));
    printf("-10, 15: %g\n", function1(-10, 15));
    printf("10, 10: %g\n", function1(10, 10));
    printf("First Line%s", function2());
    printf("10, 10: %s\n", function2(10, 10));
}

double function1(double value1, double value2) {
    return sqrt(value1 * value2);
}

char *function2() {
    return " - end of the line.\n";
}