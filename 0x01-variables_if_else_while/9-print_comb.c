#include <stdio.h>

int main(void)
{
    int i, j, k, l, m, n;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
        putchar(',');
        putchar(' ');
        for (j = i + 1; j < 10; j++)
	{
            putchar(i + '0');
            putchar(j + '0');
            putchar(',');
            putchar(' ');
            for (k = j + 1; k < 10; k++)
	    {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                putchar(',');
                putchar(' ');
                for (l = k + 1; l < 10; l++)
		{
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(k + '0');
                    putchar(l + '0');
                    putchar(',');
                    putchar(' ');
                    for (m = l + 1; m < 10; m++)
		    {
                        putchar(i + '0');
                        putchar(j + '0');
                        putchar(k + '0');
                        putchar(l + '0');
                        putchar(m + '0');
                        putchar(',');
                        putchar(' ');
                        for (n = m + 1; n < 10; n++)
			{
                            putchar(i + '0');
                            putchar(j + '0');
                            putchar(k + '0');
                            putchar(l + '0');
                            putchar(m + '0');
                            putchar(n + '0');
                            if (n != 9)
			    {
                                putchar(',');
                                putchar(' ');
                            }
                        }
                    }
                }
            }
        }
putchar('\n');
}
return (0);
}                                                                                 
