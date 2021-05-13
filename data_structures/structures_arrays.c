#include <stdio.h>

int main ()
{
    typedef struct Date{
        short year;
        char month;
        char day;
    } Date;

    Date dt[5] = { { 2014, 6, 30 }, {2015, 7, 31 }, { 2016, 8, 31 }, {2017, 9, 30 }, { 2018, 10, 31 } };

    printf("Size of Date array = %i\n", sizeof(dt));
    printf("Size of Date element = %i\n", sizeof(dt[0]));
    for ( int i=0; i<(sizeof(dt)/sizeof(dt[0])); i ++ ) {
        printf("%04i-%02i-%02i\n", dt[i].year, dt[i].month, dt[i].day);
    }
}