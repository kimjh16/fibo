#include <stdio.h>
#include "GCD2.h"


int fibo(int n) // 재귀 피보나치
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    for (int n = 5; n <= 40; n++)
    {
        int a = fibo(n);
        int b = fibo(n - 1);
        int g = gcd(a, b);

        printf("n=%d F(n)=%d F(n-1)=%d gcd=%d\n", n, a, b, g);
    }

    return 0;
}