#include <stdio.h>

int main() {
    typedef union InternalRepresentation {
        int integer;
        float floating;
    } InternalRepresentation;

    InternalRepresentation ir = {0};
    ir.floating = 123.456;
    printf("%g %x\n", ir.floating, ir.integer);
    
}