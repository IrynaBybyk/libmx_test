#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int len;

    if(!str || !sub) {
        return -1;
    }
    if (!(*sub)) {
        return 0;
    }
    len = mx_strlen(sub);
    while (*str) {
        char *p = mx_strstr(str, sub);

        if(p) {
            count++;
            str = p + len - 1;
        }
        str++;
    }
    return count;
}

