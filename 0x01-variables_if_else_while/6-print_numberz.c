#include <stdio.h>
/**
 * main - This is a program that prints all single digit nos of base 10
 *
 * Return: 0 when True
 */

int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
