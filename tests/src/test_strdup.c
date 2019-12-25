#include "test.h"

static void do_test1(void) {
    char *s = "Hello";
    char *newstr = mx_strdup(s);
    char *new_original_str = strdup(s);
    assert(strcmp(newstr, new_original_str) == 0);
}

static void do_test2(void) {
    char *s = "";
    char *newstr = mx_strdup(s);
    char *new_original_str = strdup(s);
    assert(strcmp(newstr, new_original_str) == 0);
}


void test_strdup(void) {
    do_test1();
    do_test2();
}


