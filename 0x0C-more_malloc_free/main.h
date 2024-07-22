#ifndef MAIN_H
#define MAIN_H
/**
 *File:main.h
 *Desc:header file with function prototypes
 */
char _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(char *s);
void print_number(int n);
void _puts(char *str);

#endif /* MAIN_H */