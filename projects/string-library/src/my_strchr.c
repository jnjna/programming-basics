#include "mystring.h"
#include <stddef.h>

char *my_strchr(const char *str, int c){
    while(*str!='\0'){
        if(*str == c){
            return (char *)str;
        }
        str++;
    }
    if(c!='\0'){
        return NULL;
    }
    return (char *)str;
}
