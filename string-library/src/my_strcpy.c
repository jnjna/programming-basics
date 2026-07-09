#include "mystring.h"
char *my_strcpy(char *dest, const char *str){
    char *original=dest;
    while (*str!='\0'){
        *dest=*str;
        dest++;
        str++;
    }
    *dest='\0';
    return original;
}
