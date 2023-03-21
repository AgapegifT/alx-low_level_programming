#include "main.h"

void times_table(void)
{
    int row, col;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            int result = row * col;

            if (result < 10)
            {
                if (col > 0)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
            }
            else if (result < 100)
            {
                _putchar(' ');
            }

            if (col < 9)
            {
                _putchar(result % 10 + '0');
                _putchar(',');
                _putchar(' ');
            }
            else
            {
                _putchar(result % 10 + '0');
                _putchar('\n');
            }
        }
    }
}
