#include <stdio.h>

int main()
{
    typedef struct Date {
        short year;
        char month;
        char day;
    } Date;

    Date *dt = calloc(5, sizeof(Date));

    for (int i=0; i<5; i++) {
        dt[i].year = 2010 + i;
        dt[i].month = i;
        dt[i].day = i * 2 + 1;
    }

    dt = realloc(dt, 10 * sizeof(Date));
    for (int i=5; i<10; i++) {
        dt[i].year = 2010 + i;
        dt[i].month = i * 3 % 12 + 1;
        dt[i].day = i * 3 + 1;
    }

    for (int i=0; i<10; i++) {
        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }
    free(dt);
    for (int i=0; i<10; i++) {
        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }
    
}