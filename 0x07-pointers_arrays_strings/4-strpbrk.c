#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 *@accept: input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
