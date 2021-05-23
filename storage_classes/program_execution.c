#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    printf("Opening this file in Vim\n");
    system("vim storage_classes/program_execution.c");

    printf("Sleeping for 5 seconds. \n");
    sleep(5);
    printf("Done sleeping.\n");
}