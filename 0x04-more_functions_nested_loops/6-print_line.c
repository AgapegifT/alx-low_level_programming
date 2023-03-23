#include "main.h"

/**
 * print_line - Prints a line of underscores of a given length.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
