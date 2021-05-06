#include <stdio.h>
#include "calculate_stats.h"

int get_num_elements(int numbers[]) {
    printf("sizeof(numbers) = %i\n", sizeof(numbers));
    printf("sizeof(numbers[0]) = %i\n", sizeof(numbers[0]));
    return sizeof(numbers)/sizeof(numbers[0]);
}

//int main() {
//
//    int numbers[] = {6, 9, 15, -2, 92, 11};
//    printf("Size of numbers %i\n", sizeof(numbers));
//
//    int min_number = numbers[0];
//    int max_number = numbers[0];
//    double average; 
//    int num_elements;
//
//    for ( int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i ++ ) {
//        printf("Element %i = %i\n", i, numbers[i]);
////        if ( i = 0 ) {
////            min_number = numbers[i];
////            max_number = numbers[i];
////            average = numbers[i];
////        }
//        num_elements = i + 1;
//    }
//    printf("min_number = %i\n", min_number);
//    printf("max_number = %i\n", max_number);
//    printf("average = %g\n", max_number/num_elements);
//    printf("num_elements = %i\n", num_elements);
//
//
//}
