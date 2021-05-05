#include <stdio.h>

int main() {
    
    char s1[50];
    char s2[50];
    char s3[50];

    printf("Please enter your name: ");
    scanf("%s", s1);
    printf("Please enter your street address: ");
    scanf("%s", s2);
    printf("Please enter your city, and post code: ");
    scanf("%s", s3);

    printf("\n\nYourAddress\n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

}