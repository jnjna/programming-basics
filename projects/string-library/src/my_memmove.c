#include "mystring.h"

void *my_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    void *original = dest;
    if (n == 0)
    return dest;
    if(d < s || d >= s + n) {
        while (n--) {
            *d = *s;
            d++;
            s++;
        }
    } else {
        d += n-1;
        s += n-1;
        while (n--) {
            *d = *s;
            d--;
            s--;
        }
    }

    return original;
}
