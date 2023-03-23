#include <stdio.h>

int main(void)
{
    long int num = 612852475143;
    long int factor = 2;
    long int largest = 0;

    while (num != 1)
    {
        if (num % factor == 0)
        {
            num = num / factor;
            if (factor > largest)
            {
                largest = factor;
            }
        }
        else
        {
            factor++;
        }
    }

    printf("%ld\n", largest);

    return 0;
}
