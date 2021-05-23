#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    int r;
    time_t t;
    for (int i=0; i<9; i++) {
        r = rand();
        printf("1: %i\n", r);
    }

    srand(rand());
    for (int i=0; i<9; i++) {
        r = rand();
        printf("2: %i\n", r);
    }

    srand(time(&t));
    for (int i=0; i<9; i++) {
        r = rand();
        printf("3: %i\n", r);
    }
    printf("Time: %i\n", time(&t));
}