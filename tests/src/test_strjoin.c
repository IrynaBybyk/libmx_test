#include "test.h"

static void do_test1(void) {
    char *s = mx_strjoin("ira", "bybyk");
}
static void do_test2(void) {
    char *s = mx_strjoin("", "bybyk");
}

static void do_test3(void) {
    char *s = mx_strjoin("ira", "");
}    

void test_strjoin(void){
    do_test1();
    do_test2();
    do_test3();
}