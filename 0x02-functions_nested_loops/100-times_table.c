#include "main.h"

void print_times_table(int n)
{
    int i, j;

    if (n < 0 || n > 15)
        return;

    i = 0;
    while (i <= n)
    {
        j = 0;
        while (j <= n)
        {
            if (j == 0)
                _putchar('0');
            else
            {
                int res = i * j;
                _putchar(',');
                _putchar(' ');
                if (res < 10)
                    _putchar(' ');
                if (res < 100)
                    _putchar(' ');
                _putchar((res / 100) % 10 + '0');
                _putchar((res / 10) % 10 + '0');
                _putchar((res % 10) + '0');
            }
            j++;
        }
        _putchar('\n');
        i++;
    }
}
