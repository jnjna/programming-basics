#include "mystring.h"
int my_strlen(const char *word){
    int i=0;
    while (word[i]!='\0'){
        i++;
    }
    return i;
}
