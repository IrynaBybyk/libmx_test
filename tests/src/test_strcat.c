#include "test.h"

static void do_test1(void) {
    char s1[100] ="Hello";
    char *s2 = "World";
    strcat(s1, s2);
    char ss1[100] ="Hello";
    mx_strcat(ss1, s2);
    assert(strcmp(s1, ss1) == 0);
}

static void do_test2(void) {
    char s1[100] ="";
    char *s2 = "World";
    strcat(s1, s2);
    char ss1[100] ="";
    mx_strcat(ss1, s2);
    assert(strcmp(s1, ss1) == 0);
}

static void do_test3(void) {
    char s1[100] ="";
    char *s2 = "";
    strcat(s1, s2);
    char ss1[100] ="";
    mx_strcat(ss1, s2);
    assert(strcmp(s1, ss1) == 0);
}

static void do_test4(void) {
    char s1[100] ="Hello";
    char *s2 = NULL;
    char ss1[100] ="Hello";
    mx_strcat(ss1, s2); // TODO: добиться чтобы функция давала сиг фолт
    // printf("after mx '%s'\n", ss1);
    //strcat(s1, s2);
    // mx_printstr(s1);
    // assert(strcmp(s1, ss1) == 0);
}

void test_strcat(void) {
    do_test1();
    do_test2();
    do_test3();
    do_test4();
}

