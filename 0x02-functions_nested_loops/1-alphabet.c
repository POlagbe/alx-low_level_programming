#include "main.h"

/**
 *main - This program prints the alphabet in lowercase
 *
 *print_alphabet: function that prints alphabet in lowercase
 *
 * Return: 0;
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
