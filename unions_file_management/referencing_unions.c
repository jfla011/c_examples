#include <stdio.h>

int main() {
    typedef union InternalRepresentaiton {
        int integer;
        float floating;
    } InternalRepresentaiton;

    InternalRepresentaiton ir = {0};
    InternalRepresentaiton *irp = &ir;

    ir.floating = 123.456;
    printf("%g %i\n", ir.floating, ir.integer);

    irp->integer = 1234567890;
    printf("%g %i\n", irp->floating, irp->integer);

}