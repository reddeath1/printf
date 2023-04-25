#include "main.h"
/**
 * _printf: print format string
 * @format: arg
 * @t: arg
 * Return: always
 */

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    char buffer[BUFFER_SIZE];
    int buf_pos = 0;
    int num_chars_printed = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = (char) va_arg(args, int);
                    num_chars_printed += print_char(c, buffer, &buf_pos);
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char*);
                    num_chars_printed += print_string(s, buffer, &buf_pos);
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    num_chars_printed += print_int(num, 10, 0, buffer, &buf_pos);
                    break;
                }
                case 'u': {
                    unsigned int num = va_arg(args, unsigned int);
                    num_chars_printed += print_int(num, 10, 0, buffer, &buf_pos);
                    break;
                }
                case 'o': {
                    unsigned int num = va_arg(args, unsigned int);
                    num_chars_printed += print_int(num, 8, 0, buffer, &buf_pos);
                    break;
                }
                case 'x': {
                    unsigned int num = va_arg(args, unsigned int);
                    num_chars_printed += print_int(num, 16, 0, buffer, &buf_pos);
                    break;
                }
                case 'X': {
                    unsigned int num = va_arg(args, unsigned int);
                    num_chars_printed += print_int(num, 16, 1, buffer, &buf_pos);
                    break;
                }
                case 'S': {
                    char *s = va_arg(args, char*);
                    num_chars_printed += print_string(s, buffer, &buf_pos);
                    break;
                }
                case '%': {
                    num_chars_printed += print_char('%', buffer, &buf_pos);
                    break;
                }
            }
        } else {
            num_chars_printed += print_char(*format, buffer, &buf_pos);
        }
        format++;
    }

    if (buf_pos > 0) {
        write(STDOUT_FILENO, buffer, buf_pos);
    }

    va_end(args);

    return num_chars_printed;
}
