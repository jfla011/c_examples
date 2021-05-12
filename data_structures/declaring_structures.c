#include <stdio.h>

int main() {
    typedef struct DateStruct {
        short year;
        char month;
        char day;
    } Date;

    Date aDate; // = { 2014, 6, 30 };
    printf("%04i-%02i-%02i\n", aDate.year, aDate.month, aDate.day);
    aDate.year = 2014;
    aDate.month = 12;
    aDate.day = 25;

    printf("%04i-%02i-%02i\n", aDate.year, aDate.month, aDate.day);
}