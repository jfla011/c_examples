#include <stdio.h>

int main()
{
#define TEST(x) x < 10
    
    int y = 5;
    if(TEST(y))
        printf("Test successful!\n");

#undef TEST
   // if(TEST(y))
   //     printf("Test successful!\n");
    
}