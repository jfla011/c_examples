#include <stdio.h>

int main()
{
    typedef struct Date {
        short year;
        char month;
        char day;
        struct Date *next;
    } Date;

    Date *head = malloc(sizeof(Date));
    head->year = 2014;
    head->month = 12;
    head->day = 25;
    head->next = malloc(sizeof(Date));
    head->next->year = 2014;
    head->next->month = 12;
    head->next->day = 26;
    head->next->next = malloc(sizeof(Date));
    head->next->next->year = 2014;
    head->next->next->month = 12;
    head->next->next->day = 27;
    head->next->next->next = NULL;

    Date *dt = malloc(sizeof(Date));
    dt->year = 2014;
    dt->month = 6;
    dt->day = 15;
    dt->next = head->next->next;
    head->next->next = dt;

    dt = head;


    while (dt != NULL) {
        printf("%04i-%02i-%02i\n", dt->year, dt->month, dt->day);
        dt = dt->next;
    }
    free(head->next->next);
    free(head->next);
    free(head);
}