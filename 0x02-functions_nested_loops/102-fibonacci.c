#include <stdio.h>

int main(void)
{
    int i, n = 50;
    long long fib1 = 1, fib2 = 2, nextFib;

    printf("%lld, %lld, ", fib1, fib2);
    for (i = 3; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        printf("%lld", nextFib);
        if (i < n)
	{
            printf(", ");
        }
        fib1 = fib2;
        fib2 = nextFib;
    }
    printf("\n");
    return (0);
}
