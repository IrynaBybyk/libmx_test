#include "test.h"

static void do_test1(void) {
    char s1[] = "Hello";
    char ss1[10];
    mx_strcpy(ss1, s1);
    assert(mx_strcpy(ss1, s1) == strcpy(ss1, s1));
}
static void do_test2(void) {
    char s2[] = "";
    char ss2[10];
    mx_strcpy(ss2, s2);
    assert(mx_strcpy(ss2, s2) == strcpy(ss2, s2));
}

void test_strcpy(void) {
    do_test1();
    do_test2();
}

