#include "test.h"

static void do_test1(void) {
    char *s = mx_strndup("Hello world", 4);
    char *str = strndup("Hello world", 4);
    assert(strcmp(s, str) == 0);
}

static void do_test2(void) {
    char *s = mx_strndup("Hello world", 40);
    char *str = strndup("Hello world", 40);
    assert(strcmp(s, str) == 0);
}

static void do_test3(void) {
    char *s = mx_strndup("", 5);
    char *str = strndup("", 5);
    assert(strcmp(s, str) == 0);
}
static void do_test4(void) {
    char *s = mx_strndup("Ira", -1);
    char *str = strndup("Ira", -1);
    assert(strcmp(s, str) == 0);
}


void test_strndup(void) {
    do_test1();
    do_test2();
    do_test3();
    do_test4();
}

