#include <stdio.h>

int main()
{
    typedef struct Date {
        short year;
        char month;
        char day;
    } Date;
    Date dt[5] = {{ 2014, 6, 30 }, {2014, 7, 31 }, {2014, 8, 31 }, {2014, 9, 30 }, {2014, 10, 31 }};
    Date dt2[5];

    FILE *file;
    file = fopen("unions_file_management/file_output.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fwrite(dt, sizeof(Date), 5, file);
    fclose(file);

    file = fopen("unions_file_management/file_output.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fread(dt2, sizeof(Date), 5, file);
    fclose(file);

    for (int i=0; i < 5; i++) {
        printf("%i: %04i-%02i-%02i\n", i, dt2[i].year, dt2[i].month, dt2[i].day);
    }
}