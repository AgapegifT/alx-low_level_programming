#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 upto 9
 * Description: prints the numbers excluding 2 and 4
 * Return: The since 0 upto 9
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
