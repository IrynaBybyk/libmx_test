#include "test.h"

void do_test1(void) {
    char *arr[] = {"qqq", "qq", "q", "q1"};
    int size = 4;
    mx_quicksort(arr, 0, size - 1);
    char *res_arr = {"q", "q1", "qq", "qqq" };
    for (int i = 0; i < size; i++) {
        assert(strcmp(arr[i], res_arr[i]) == 0);
    }
}

void test_qsort() {
    do_test1();
}

