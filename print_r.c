#include "main.h"

/**
 * print_r - A function that prints a string in reverse
 * @r: string to print
 * Return: number of printed characters
 */
int print_r(va_list r)
{
	char *s = va_arg(r, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
