#include <stdlib.h>
#include <stdio.h>
#include <check.h>
#include <math.h>
#include "../src/calculate_stats.h"


START_TEST (test_num_elements)
{
    int numbers[] = {6, 9, 15, -2, 92, 11};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    ck_assert_int_eq(get_num_elements(numbers,length),6);
   // ck_assert_msg(get_num_elements(numbers) == 6, "Was expecting a value of 6, but found %i", get_num_elements(numbers));
}
END_TEST

START_TEST (test_minimum_value)
{
    int numbers[] = {6, 9, 15, -2, 92, 11};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    ck_assert_int_eq(get_minimum_value(numbers,length), -2);
}
END_TEST

START_TEST (test_maximum_value)
{
    int numbers[] = {6, -900, 150, -2, 92, 11, 467, 21, -256, 15000};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    ck_assert_int_eq(get_maximum_value(numbers,length), 15000);
}
END_TEST

START_TEST (test_average)
{
    int numbers[] = {6, -900, 150, -2, 92, 11, 467, 21, -256, 15000};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    double result = 1458.9;
    ck_assert(fabs(get_average(numbers,length) - result) < 0.001);
}
END_TEST

START_TEST (test_average_2)
{
    int numbers[] = {6, 9, 15, -2, 92, 11};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    double result = 21.833333;
    ck_assert(fabs(get_average(numbers,length) - result) < 0.00001);
}
END_TEST


Suite * calculate_stats_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Calculate_stats");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_num_elements);
    tcase_add_test(tc_core, test_minimum_value);
    tcase_add_test(tc_core, test_maximum_value);
    tcase_add_test(tc_core, test_average);
    tcase_add_test(tc_core, test_average_2);
    suite_add_tcase(s, tc_core);

    return s;
}

int main (void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = calculate_stats_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}