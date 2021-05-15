#include "stdio.h"
#include "stdbool.h"

int main()
{
    for (int i=0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            printf("i: %i, j: %i\n", i, j);
            if (i == 3 && j == 50)
              goto end;
        }
    }

end: printf("end\n");

}