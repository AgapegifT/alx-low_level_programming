#include "main.h"

/**
 * -isalpha - function that checks for alphabets
 *
 *  Return: always 1 if is an alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
