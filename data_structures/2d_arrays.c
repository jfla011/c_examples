#include <stdio.h>

int main() {
    int ia[5][2] = {
        {9,8},
        {7,6},
        {5,4},
        {3,2},
        {1,0},
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%i,%i %i\n", i, j, ia[i][j]);
        }
    }
}