#ifndef MYSTRING_H
#define MYSTRING_H

int my_strlen(const char *str);
char *my_strcpy(char *dest, const char *str);
int my_strcmp(const char *str1, const char *str2);
char *my_strcat(char *dest,const char *src);
char *my_strchr(const char *str, int c);
void *my_memmove(void *dest, const void *src, size_t n);

#endif
