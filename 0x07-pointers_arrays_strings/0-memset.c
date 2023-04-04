#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: a desired value to fill the memory with
 * @n: number of bytes to be changed
 * Return: pointer to the changed memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        return (s);
}
