#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: size of the triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
    if (size <= 0)
    {
	    _putchar('\n');

	    return;
    }
    else
    {
	    for (int i = 0; i <= size; i++)
    {
        for (int j = size - i; j > 1; j--)
        {
            _putchar(32);
        }
        for (int k = 1; k <= i; k++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
