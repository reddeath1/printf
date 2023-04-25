#include "main.h"
/**
 * print_int: main func
 * @num: arg
 * @uppercase: arg
 * @buffer: arg
 * @buf_pos: arg
 * Return: always
 */

static int print_int(int num, int base, int uppercase, char *buffer, int *buf_pos) {
    char digits[] = "0123456789abcdef";
    if (uppercase) {
        digits[10] = 'A';
        digits[11] = 'B';
        digits[12] = 'C';
        digits[13] = 'D';
        digits[14] = 'E';
        digits[15] = 'F';
    }

    int count = 0;
    if (num < 0) {
        count += print_char('-', buffer, buf_pos);
        num = -num;
    }
    if (num >= base) {
        count += print_int(num / base, base, uppercase, buffer, buf_pos);
    }
    count += print_char(digits[num % base], buffer, buf_pos);
    return count;
}
