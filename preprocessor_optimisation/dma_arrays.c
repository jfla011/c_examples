#include <stdio.h>

int main()
{
    typedef struct Date {
        short year;
        char month;
        char day;
    } Date;

    Date *dt = calloc(10, sizeof(Date));

    for ( int i=0; i<10; i++ ) {
        dt[i].year = 2010 + i;
        dt[i].month = i;
        dt[i].day = i * 2 + 1;

        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }

    free(dt);
}