#include <stdio.h>

int main()
{
    printf("String: %20s\n", "This is a string");
    printf("Char: %c\n", 'A');
    printf("Integer: %i\n", 1234567890);
    printf("Decimal: %012d\n", 1234567890);
    printf("Octal: %015o\n", 1234567890);
    printf("Hexadecimal: %x\n", 1234567890);
    printf("Float: %g\n", 12345.6789);
    printf("Float: %f\n", 12345.6789);
    printf("Float: %e\n", 12345.6789);
    printf("Float: %5.4f\n", 12345.6789);
}