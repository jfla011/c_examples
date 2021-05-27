#include <stdio.h>

#define DISPLAY

int main()
{
#ifdef DISPLAY
    printf("Display is set\n");
#endif
#undef DISPLAY
#ifndef DISPLAY
    printf("Display is no longer set\n");
#endif
}