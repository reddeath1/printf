#include "main.h"
/**
 * print_char: print characters
 * @c: arg
 * @buffer: arg
 * @buf_pos: arg
 * Return: always
 */


static int print_char(char c, char *buffer, int *buf_pos) {
    if (*buf_pos >= BUFFER_SIZE) {
        write(STDOUT_FILENO, buffer, BUFFER_SIZE);
        *buf_pos = 0;
    }
    buffer[*buf_pos] = c;
    *buf_pos += 1;
    return 1;
}
