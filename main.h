#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
int _pointer(va_list val);
int print_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned int num);
int print_exclusive_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int _oct(va_list val);
int _unsigned(va_list args);
int print_bin(va_list val);
int reverse_string(va_list args);
int _rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_char(va_list val);
int print_string(va_list val);

#endif
