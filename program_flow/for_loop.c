#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 0; i < 10; i++) {
        printf("%i\n", i);
        for (int j=0; j<10; j++) {
            printf("\t%i\n", j);
            for (int j=0; j<10; j++) {
                printf("\t\t%i\n", j);
            }
        }
    }




}