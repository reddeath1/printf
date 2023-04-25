#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(const char *s, char *buffer, int *buf_pos);
int print_int(int num, int base, int uppercase, char *buffer, int *buf_pos);

#endif  /* _MAIN_H */
