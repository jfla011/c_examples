#include <stdio.h>
#include "calculate_stats.h"

int get_num_elements(int numbers[], int length) {
    return length;
}

int get_minimum_value(int numbers[], int length){
    int minimum = numbers[0];
    for ( int i=0; i<length; i++ ) {
       if (numbers[i] < minimum) {
           minimum = numbers[i];
       } 
    }
    return minimum;
}

int get_maximum_value(int numbers[], int length){
    int maximum = numbers[0];
    for ( int i=0; i<length; i++ ) {
       if (numbers[i] > maximum) {
           maximum = numbers[i];
       } 
    }
    return maximum;
}

double get_average(int numbers[], int length) {
    double total = 0;
    printf("initial value of total = %g\n", total);
    for ( int i=0; i<length; i++ ) {
        total += numbers[i];
    }
    printf("method result = %g\n", total/length);
    printf("static result = %g\n", 1458.9);
    return total/length;
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
