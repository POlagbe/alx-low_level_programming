#include <stdio.h>

/**
 * main - This program prints numbers of base 16 in lowercase
 *
 * Return: 0 when True
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j < 'g' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
