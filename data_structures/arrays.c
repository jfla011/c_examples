#include <stdio.h>

int main()
{
    int ia[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    ia[0] = ia[5] + ia[7];
    ia[1] -= ia[8];
    ia[9] += 12;

    for (int i = 0; i < 10; i++) {
        printf("%i %i\n", i, ia[i]);
    }


}