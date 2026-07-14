#include "mystring.h"

void *my_memset(void *ptr, int value, size_t n){
    unsigned char *p = ptr;
    while (n--) {
        *p = (unsigned char)value;
        p++;
    }
    return ptr;
}