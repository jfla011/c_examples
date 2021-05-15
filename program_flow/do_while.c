#include <stdio.h>
#include <stdbool.h>

int main()
{
    do {
        printf("Do... While loop now entered\n");
    } while (false);

    do {
        printf("Do...while loop\n");
        break;
    } while (true);

    int i = 0;
    do {
        printf("%i\n", i);
        i++;
    } while (i < 10);

}