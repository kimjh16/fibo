#include "GCD2.h"

int gcd(int a, int b)
{
    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    if (a == 0 && b == 0)
        return 0;

    int result = 1;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }

    return result;
}