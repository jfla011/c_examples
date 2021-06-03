#include <stdio.h>
#include <stdint.h>

int main(void)
{
    float f = 199.234567;

    uint32_t num = (uint32_t)f;

    printf("Float: %i\n", num);
    printf("Hex: %x\n", num);
    printf("Float: %i\n", (num&0x7fff)>>16);
    printf("Hex: %x\n", (num&0x7fff)>>16);
}