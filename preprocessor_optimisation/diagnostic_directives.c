#include <stdio.h>

int main()
{
    printf("%s %s\n", __DATE__, __TIME__);
    printf("%s %i\n", __FILE__, __LINE__);
    printf("%s %s\n", __FUNCTION__, __TIMESTAMP__);
}