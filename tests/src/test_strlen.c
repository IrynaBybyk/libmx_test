#include "test.h"

static void do_test1(void) {
    char *s = "";
    assert(mx_strlen(s) == strlen(s));

}

static void do_test2(void) {
    char *ss = "12344";
    assert(mx_strlen(ss) == strlen(ss));
}

void test_strlen(void) {
    do_test1();
    do_test2();
}


