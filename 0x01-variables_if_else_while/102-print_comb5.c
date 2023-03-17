#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            int num1_first = i / 10;
            int num1_second = i % 10;
            int num2_first = j / 10;
            int num2_second = j % 10;

            if (i != j)
            {
                if (num1_first == 0)
                {
                    putchar('0');
                }
                putchar('0' + num1_first);
                putchar('0' + num1_second);
                putchar(' ');
                if (num2_first == 0)
                {
                    putchar('0');
                }
                putchar('0' + num2_first);
                putchar('0' + num2_second);

                if (i != 98 || j != 99)
                {
                    putchar(',');
                    putchar(' ');
}
}
}
}
return (0);
}
