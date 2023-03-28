#include "main.h"

/**
 * print_rev - this function prints a string in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int m;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (m = length; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
