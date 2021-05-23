#include <stdio.h>
#include <time.h>

int main(int argc, char *argv)
{
    time_t t = time(NULL);
    printf("%s\n", ctime(&t));

    struct tm *time;
    time = localtime(&t);
    printf("%s\n", asctime(time));
}