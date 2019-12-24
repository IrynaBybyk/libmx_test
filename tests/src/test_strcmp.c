#include "test.h"

void test1(void) {
    char *s1 = "Hello";
    char *s2 = "Hell";
    char *s3 = "Hello1";
    char *s4 = "";
    char *s5 = "Word";
    assert(mx_strcmp(s1, s1) == strcmp(s1, s1));
    assert(mx_strcmp(s1, s2) == strcmp(s1, s2));
    assert(mx_strcmp(s1, s3) == strcmp(s1, s3));
    assert(mx_strcmp(s1, s4) == strcmp(s1, s4));
    assert(mx_strcmp(s1, s5) == strcmp(s1, s5));

    assert(mx_strcmp(s2, s1) == strcmp(s2, s1));
    assert(mx_strcmp(s3, s1) == strcmp(s3, s1));
    assert(mx_strcmp(s4, s1) == strcmp(s4, s1));
    assert(mx_strcmp(s5, s1) == strcmp(s5, s1));
}

void test_strcmp(void) {
    do_test1();
}
