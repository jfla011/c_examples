#include <stdlib.h>
#include <check.h>
#include "calculate_stats.h"

START_TEST (test_num_elements)
{
    int numbers[] = {6, 9, 15, -2, 92, 11};
    ck_assert(6 == 6);
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