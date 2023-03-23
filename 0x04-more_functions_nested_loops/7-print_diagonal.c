#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @n: the number of times to grint diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (x = 0; x < n; x++)
                {
                        for (y = 0; y < x; y++)
                        {
                                _putchar(13);
                        }
                        _putchar(02);
                        _putchar('\n');
                }
        }
}
