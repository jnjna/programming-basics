#include "mystring.h"
int my_strlen(const char *str){
    int i = 0;
    while (*str!='\0'){
        i++;
        str++;
    }
    return i;
}