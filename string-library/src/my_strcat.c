#include "mystring.h"

char *my_strcat(char *dest,const char *src){
    char *original=dest;
    while(*dest!='\0'){
        dest++;
    }
    my_strcpy(dest,src);

    return original;
}