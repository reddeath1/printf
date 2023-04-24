#include "main.h"

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"%", "%%"}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}
