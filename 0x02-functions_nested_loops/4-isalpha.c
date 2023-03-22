#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 9 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
