#include "main.h"

/**
 * print_string: main func
 * @s: arg
 * @buffer: arg
 * @buf_pos: arg
 * Return: always
 */

int print_string(const char *s, char *buffer, int *buf_pos) {
    int count = 0;
    while (*s != '\0') {
        if (*s >= ' ' && *s <= '~') {
            count += print_char(*s, buffer, buf_pos);
        } else {
            count += print_char('\\', buffer, buf_pos);
            count += print_char('x', buffer, buf_pos);
            count += print_char((*s / 16) < 10 ? (*s / 16) + '0' : (*s / 16) - 10 + 'A', buffer, buf_pos);
            count += print_char((*s % 16) < 10 ? (*s % 16) + '0' : (*s % 16) - 10 + 'A', buffer, buf_pos);
        }
        s++;
    }
    return count;
}
