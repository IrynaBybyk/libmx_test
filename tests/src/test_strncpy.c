#include "test.h"



static void do_test1(void) {
    char dst[20];
    char src[] = "Bybyk";
    mx_strncpy(dst, src, 2);
    mx_strncpy(dst, src, 5);
    mx_strncpy(dst, src, 10);

    assert(mx_strncpy(dst, src, 2) == strncpy(dst, src, 2));
    assert(mx_strncpy(dst, src, 5) == strncpy(dst, src, 5));
    assert(mx_strncpy(dst, src, 10) == strncpy(dst, src, 10));
}

static void do_test2(void) {
    char dst[20];
    char src[] = "";
    assert(mx_strncpy(dst, src, 2) == strncpy(dst, src, 2));
}

static void do_test3(void) {
    char dst[20];
    char src[] = "";
    assert(mx_strncpy(dst, src, 0) == strncpy(dst, src, 0));
}

void test_strncpy(void) {
    do_test1();
    do_test2();
    do_test3();
}


