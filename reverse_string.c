#include "main.h"
/**
 * reverse_string: main fun
 * @s: arg
 * @buffer: arg
 * @buf_pos:arg
 * Return: string
*/

int reverse_string(char *s, char *buffer, int *buf_pos) 
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--) 
	{
		print_char(s[i], buffer, buf_pos);
	}
	
	return len;
}
