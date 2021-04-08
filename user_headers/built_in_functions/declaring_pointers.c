#include <stdio.h>

typedef struct Date {
    char month;
    char day;
    short year;
} Date;

int main()
{
    int *i1 = 12345;
    float f1 = 123.456F;
    float *f2 = &f1;
    char *string = "This is a string or character array.";
    printf("%i %f %s\n", i1, *f2, string);

    Date d = { .month = 6, .day = 25, .year = 2001 };
    Date *dt = &d;
    printf("%04i-%02i-%02i\n", dt->year, dt->month, dt->day);
    printf("%04i-%02i-%02i\n", d.year, d.month, d.day);
}