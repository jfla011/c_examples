#include <stdio.h>
#include <string.h>

char *strupr (char *str) {
    for ( int i=0; i<strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return str;

}

char *strlwr (char *str) {
    for ( int i=0; i<strlen(str); i++ ){
        str[i] = tolower(str[i]);
    }
    return str;
}

char *strrev (char *str) {

    char ch;
    int i = strlen(str) -1, j=0;

    while (i > j) {

        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;

    }
    return str;
}

int main () 
{
    char s1[50];
    strcpy(s1, "String Testing ONE");
    printf("%s: %i\n", s1, strlen(s1));
    strcat(s1, " and More");
    printf("%s: %i\n", s1, strlen(s1));
    printf("%s\n", strrev(s1));
    printf("%s\n", strupr(s1));
    printf("%s\n", strlwr(s1));
    printf("%s\n", strrev(s1));

}